#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <MD_Parola.h>
#include <MD_MAX72XX.h>
#include <SPI.h>

// Define LCD I2C address
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define Keypad configuration
const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {22, 23, 24, 25};
byte colPins[COLS] = {26, 27, 28, 29};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Define P10 Display Pins
#define MAX_DEVICES 1
#define CLK 10
#define DATA 9
#define CS 11

MD_Parola P = MD_Parola(MD_MAX72XX::FC16_HW, DATA, CLK, CS, MAX_DEVICES);

// Global variable to store token number
String tokenNumber = "";

void setup() {
  lcd.begin();
  lcd.backlight();
  
  Serial.begin(9600);
  
  P.begin();
  P.setIntensity(5);
  P.displayClear();
  
  lcd.setCursor(0, 0);
  lcd.print("Enter Token:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key == '#') { // Send token to P10 display
      if (tokenNumber.length() > 0) {
        Serial.println("Token: " + tokenNumber);
        
        // Display on P10
        P.displayClear();
        P.print(tokenNumber.c_str());
        
        // Clear input and LCD
        tokenNumber = "";
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Enter Token:");
      }
    } else if (key == '*') { // Clear input
      tokenNumber = "";
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Enter Token:");
    } else { // Add digit to token number
      if (tokenNumber.length() < 4) { // Limit input to 4 digits
        tokenNumber += key;
        lcd.setCursor(0, 1);
        lcd.print(tokenNumber);
      }
    }
  }
}


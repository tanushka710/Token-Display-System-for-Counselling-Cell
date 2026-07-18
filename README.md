# 🎟️ Token Display System for Counselling Cell

An embedded systems project developed using the **Arduino Mega 2560** to automate token management in counselling cells and other queue-based service environments. The system enables multiple receptionists to independently generate and display token numbers while maintaining a centralized real-time display for visitors.

---

## 📌 Overview

The Token Display System is designed to replace manual queue management with an efficient, low-cost, and scalable embedded solution. Each receptionist is provided with a dedicated **4×4 matrix keypad** and **16×2 I2C LCD** for token entry and confirmation. The Arduino Mega collects token inputs from all receptionist units and displays the active tokens on a **P10 LED Matrix Display** in real time.

The modular architecture allows multiple users to operate simultaneously without interference, making it suitable for institutions where organized queue management is essential.

---

## ✨ Features

- Multi-user token management
- Supports four independent receptionist units
- Real-time token display on P10 LED Matrix
- Individual LCD feedback for each receptionist
- Arduino Mega 2560 based design
- Low-cost and easy-to-build system
- Modular and scalable architecture
- Fast and reliable token processing

---

## 🛠️ Hardware Components

- Arduino Mega 2560
- 4 × 4 Matrix Keypads (4)
- 16 × 2 I2C LCD Displays (4)
- P10 LED Matrix Display Modules (3)
- 5V 10A Power Supply
- Jumper Wires
- Breadboard & Connectors

---

## 💻 Software & Libraries

- Arduino IDE
- Embedded C/C++
- Keypad.h
- LiquidCrystal_I2C.h
- Wire.h
- SPI.h
- MD_Parola.h
- MD_MAX72XX.h

---

## ⚙️ Working

1. The receptionist enters a token number using the keypad.
2. The entered token is displayed on the corresponding LCD.
3. Pressing **#** confirms and submits the token.
4. The Arduino Mega processes the token.
5. The P10 LED Matrix updates automatically and displays all active tokens.
6. The process repeats continuously for all receptionist units.

---

## 📂 Project Structure

```
Token-Display-System/
│
├── Code/
│   └── TokenDisplaySystem.ino
│
├── Circuit_Diagram/
│   └── Circuit.png
│
├── Images/
│   ├── Hardware_Setup.jpg
│   ├── Circuit.png
│   ├── Working.jpg
│   └── Output.jpg
│
├── Documentation/
│   └── Project_Report.pdf
│
└── README.md
```

---

## 🚀 Applications

- College Counselling Cells
- Educational Institutions
- Hospitals & Clinics
- Banks
- Government Offices
- Customer Service Centers
- Libraries
- Public Service Centers

---

## 🔮 Future Enhancements

- Wi-Fi enabled token management
- Mobile application integration
- Voice announcement system
- Touchscreen interface
- Cloud database support
- SMS notifications
- Online token booking

---


## 👨‍💻 Developed By

**Tanushka Mishra**  
**B.Tech – Electronics & Communication Engineering**

---

⭐ If you found this project useful, don't forget to **Star** this repository!

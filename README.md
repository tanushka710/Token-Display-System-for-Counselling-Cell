The Token Display System for Counselling Cell is an embedded systems project designed to automate queue management in educational institutions. The system allows up to four receptionists to independently enter token numbers using dedicated 4×4 matrix keypads. Each receptionist receives real-time confirmation on an individual 16×2 I2C LCD, while all active tokens are displayed on a centralized P10 LED Matrix Display.

The Arduino Mega 2560 serves as the central controller, processing inputs from all receptionist units simultaneously and updating the LED display in real time. The system eliminates manual queue handling, reduces waiting time, and improves coordination between reception desks and visitors.
✨ Features
🎟️ Multi-user token management
👩‍💼 Supports four independent receptionist units
⌨️ 4×4 Matrix Keypad input
📟 Individual 16×2 I2C LCD feedback
📺 Real-time P10 LED scrolling display
⚡ Arduino Mega 2560 based
🔄 Modular and scalable architecture
💰 Low-cost embedded solution
🛠️ Hardware Components
Component	Quantity
Arduino Mega 2560	1
4×4 Matrix Keypad	4
16×2 I2C LCD	4
P10 LED Matrix Display	3
5V 10A Power Supply	1
Jumper Wires	As Required
💻 Software & Libraries
Arduino IDE
Embedded C/C++
Keypad.h
LiquidCrystal_I2C.h
MD_Parola.h
MD_MAX72XX.h
SPI.h
Wire.h
⚙️ Working Principle
Receptionists enter token numbers using individual keypads.
The entered token is displayed on the corresponding LCD.
Pressing # confirms the token.
Arduino Mega receives the token from the receptionist unit.
All submitted tokens are combined and displayed on the P10 LED Matrix.
The LED display updates automatically whenever a new token is submitted.
🏗️ System Architecture
                +------------------------+
                | Receptionist Unit 1    |
                | Keypad + LCD           |
                +-----------+------------+
                            |
                +-----------+------------+
                | Receptionist Unit 2    |
                | Keypad + LCD           |
                +-----------+------------+
                            |
                +-----------+------------+
                |      Arduino Mega      |
                +-----------+------------+
                            |
                +-----------+------------+
                |     P10 LED Display    |
                |  Real-Time Token Board |
                +------------------------+
📂 Repository Structure
Token-Display-System/
│
├── Code/
│   └── TokenDisplaySystem.ino
│
├── Circuit_Diagram/
│   └── Circuit.png
│
├── Images/
│   ├── Hardware.jpg
│   ├── P10Display.jpg
│   ├── LCD.jpg
│   └── Working.jpg
│
├── Documentation/
│   └── Project_Report.pdf
│
└── README.md
🚀 Applications
College Counselling Cells
Hospitals & Clinics
Banks
Government Offices
Customer Service Centers
Library Counters
Public Service Centers
🔮 Future Improvements
Wi-Fi-based token updates
Mobile application integration
Voice announcement system
Touchscreen interface
Cloud database support
SMS notifications
Online token booking

👩‍💻 Author
Tanushka Mishra
B.Tech – Electronics & Communication Engineering

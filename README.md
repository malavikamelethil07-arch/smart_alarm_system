# 🌙 Smart Alarm System using LDR & Buzzer

## 📌 Project Overview
This project is a **Smart Alarm System** that detects low light conditions using an **LDR (Light Dependent Resistor)** and triggers a **buzzer alert along with an LED indication**.

It is useful for applications like:
- Intruder alert systems 🚨  
- Automatic night detection 🌃  
- Security monitoring systems  

---

## ⚙️ How It Works
- The **LDR sensor** continuously monitors ambient light.
- When the light intensity **drops below a threshold**:
  - 🔊 Buzzer turns ON (alarm)
  - 💡 LED turns ON (visual indication)
- When light is sufficient:
  - Buzzer and LED remain OFF

---

## 🧰 Components Required

| Component              | Quantity |
|----------------------|----------|
| Arduino UNO          | 1        |
| LDR Sensor           | 1        |
| Buzzer               | 1        |
| LED                  | 1        |
| Resistors (10kΩ, 220Ω) | 2      |
| Breadboard           | 1        |
| Jumper Wires         | As needed |

## Video of stimulation
[Watch video](https://drive.google.com/file/d/1JJMecI7oZEW0Caqb-K4G5W0eLh1fLkdu/view?usp=drive_link)


## 💻 Arduino Code
The code is given below:
[View code](alarm.cpp)

  delay(200);
}

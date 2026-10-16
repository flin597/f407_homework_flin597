# STM32 Embedded Learning & Motor Control

This repository contains my hands-on embedded software training and practice using **STM32F407** microcontrollers (including STM32F407IGH6 and STM32F407VGT6), completed during my training time in the **PnX Robotics Team**.

The projects cover fundamental peripherals, communication protocols, control algorithms, and real-time systems.

## 📂 Repository Structure

- **`BreathingLight`**: PWM-based breathing LED implementation.
- **`EXTI0919`**: External interrupt (EXTI) configuration and testing.
- **`DMA`**: Direct Memory Access (DMA) data transfer practice.
- **`CAN`**: CAN bus communication implementation for peripheral/sensor integration.
- **`RM27-tutorial-PID`**: Cascade PID controller implementation for motor control.
- **`RTOS`**: Real-Time Operating System (RTOS) task scheduling and management.
- **`SYSTEMF4`**: STM32F4 system-level configuration files.
- **`stm32f407igh6` / `stm32f407vgt6`**: Board-specific basic configurations and initialization code.
- **`LOG.md`**: Development logs and learning notes.
- **`assets`**: Images and screenshots of hardware setups and results.

## 🚀 Key Features & What I Did

- **Peripherals & Drivers**: Implemented GPIO, timers, PWM, UART, CAN, and I2C on STM32F407.
- **Motor Control**: Built a motor control demo using PWM speed control and encoder feedback.
- **Cascade PID**: Tuned both inner and outer loops of a cascade PID controller for closed-loop motor speed and position control.
- **RTOS**: Practiced task scheduling and real-time control using RTOS.
- **Debugging**: Used serial logging and basic measurements to debug hardware/software issues, documenting the process in `LOG.md`.

## 🛠️ Hardware & Software

- **MCU**: STM32F407IGH6 / STM32F407VGT6
- **IDE/Toolchain**: STM32CubeMX, VS Code, Git
- **Language**: C/C++
- **Debugger**: ST-Link, DAP

## 📖 How to Use

1. Clone the repository:
   ```bash
      git clone https://github.com/flin597/f407_homework_flin597.git
2. Open the desired project folder (e.g., RM27-tutorial-PID) in your preferred IDE.
3. Compile and flash the code to your STM32F407 board using ST-Link.
4. For PID tests, connect the motor driver, encoder, and power supply properly. Check LOG.md for more details.

## 📝 Notes
• This repository is a personal learning record and a collection of team training assignments.
• Some base code and templates were initialized from team tutorials; the implementations, debugging, and documentation are my own work.
• Code is for educational and training purposes.

## 📬 Contact
Fangyan LIN
• Email: flin597@connect.hkust-gz.edu.cn
• GitHub: https://github.com/flin597
   git clone https://github.com/flin597/f407_homework_flin597.git

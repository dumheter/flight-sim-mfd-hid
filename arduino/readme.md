# Firmware for Arduino Pro Micro
Compiled 2023-01-28 on Arduino IDE 2.0.3
## Sparkfun
Find the board on sparkfun  
https://www.sparkfun.com/products/12640
  
Instruction for how to install the board to Arduino IDE on [Sparkfun's github page](https://github.com/sparkfun/Arduino_Boards)

## ArduinoJoystickLibrary
To utilize the Atmega32u4, I use the [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary). The zip can also be found in this folder.

## Tips
You can use `joy.cpl` to get the pre-installed windows joystick tester program, to see your code in action.  
  
Do not chose the board variant 8MHz 3.3V if you have a 5V board, it will soft brick it, and you have to burn the bootloader again using an external device.  

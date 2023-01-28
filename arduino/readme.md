# Firmware for Arduino Pro Micro
Compiled 2023-01-28 on Arduino IDE 2.0.3
## Sparkfun
Find the board on sparkfun  
https://www.sparkfun.com/products/12640  
  
Instruction for how to install the board to Arduino IDE on [Sparkfun's github page](https://github.com/sparkfun/Arduino_Boards)  
  
Also read this guide, is a great resource for this board: https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide  

## ArduinoJoystickLibrary
To utilize the Atmega32u4, I use the [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary). The zip can also be found in this folder.

## FlightSimMfd
This is a modified version of spark fun's hardware package. I've changed the usb package name from "SparkFun Pro Micro" to "MFD". Quoting from [source](https://github.com/MHeironimus/ArduinoJoystickLibrary/issues/14): "If your device, is the first device connected to this computer with that vid / pid combination, it will be displayed with your usb_product name.".  
  
Install in "C:\Users\<COMPUTERNAME>\AppData\Local\Arduino15\packages".

## Tips
You can use `joy.cpl` to get the pre-installed windows joystick tester program, to see your code in action.  
  
Do not chose the board variant 8MHz 3.3V if you have a 5V board, it will soft brick it, and you have to burn the bootloader again using an external device.  

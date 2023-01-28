# Flight Simulation MFD HID.
Physical representation of the buttons around the multi-function display device, to be used in flight simulation games. Note that most airplanes around that time use a similar MFD unit. F-16, F-15, the US version of the Harrier, etc.  
  
The project invoves a custom made PCB, made in Ki-Cad. It's powered by an Arduino pro micro, which uses an Atmel Atmega32u4. It's main strength it the usb controller inside the chip. It will act as a windows joystick device, with 20 buttons that can be mappend in the game to the DDI/MFD.

## How it works
Gif of first test, irl.  
![gif of it in action](https://github.com/dumheter/flight-sim-mfd-hid/blob/main/inaction.gif)  
Ki-cad pcb drawing.  
![pcd kicad drawing](https://github.com/dumheter/flight-sim-mfd-hid/blob/main/pcb_kicad.png)  
Finished pcb, next to my flight stick.  
![finished pcb](https://github.com/dumheter/flight-sim-mfd-hid/blob/main/pcb_irl.jpg)  
How the cockpit look in (dcs) game.  
![cockpit](https://github.com/dumheter/flight-sim-mfd-hid/blob/main/cockpit.jpg)

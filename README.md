# BMS-using-BQ76930
Battery Management System (BMS) plays an very important role while dealing with multiple batteries. Here I've used BQ76930 by Texas Instruments and tried to make the connections and design as simple as possible.

## Overview
This project implements a smart Li-ion Battery Management System using BQ76930.

## Features
- Capable of monitoring 3–10 cells 
- Over/under voltage protection
- Temperature monitoring
- Passive cell balancing

## Imp Hardware Used
- BQ76930 
- MOSFETs (for charge and discharge)
- Shunt resistor

## Program
-Here I have used ESP32, you can select module of your cjoice but look for the req no of pins. 
-I have written the code for 6 cells(i=6) and have used only one pin for temperature sensing.
-Define your SDA and SCL pins in the code.
-Refer to the datasheet for cell address.

## How to Run
1. Connect the battery pack 
2. Note down the values
3. If using a MCU, than write program as needed
4. Monitor serial output

## Applications
- Widely used in EV vehicles 
- Adding an microcontroller to it enables cell monitoring 
- Used in various kind of Robotics Projects 

## Author
Pratik Mahata

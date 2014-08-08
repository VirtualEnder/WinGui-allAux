/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\MultiWii_nav_b7.ino"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Alarms.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Alarms.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\EEPROM.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\EEPROM.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\GPS.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\GPS.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\IMU.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\IMU.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\LCD.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\LCD.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\MultiWii.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\MultiWii.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Output.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Output.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Protocol.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Protocol.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\RX.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\RX.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Sensors.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Sensors.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Serial.cpp"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\Serial.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\config.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\config_tricopter.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\def.h"
#include "D:\Users\Ryan\Documents\Arduino\MultiWii_nav_b7\types.h"

# Smart-street-light
Automatic power saving street lights, using Arduino ATMEGA328, Ultrasonic sensors and LDR


INTRODUCTION
	

Energy conservation has become one of the important needs for present day society, since power shortages on a day to day basis have become a problem all over the world. This project aims to alleviate the problem even if by a little.
	Irresponsible handling of street lights has increased nowadays drastically on highways as well as in cities resulting in consumption of huge amount of electricity. Hence this project mainly focuses on the use of digital electronics on lights. This will avoid involvement of any man-power and hence avoid the unnecessary excessive use of power. 


OBJECTIVE
	

Controlling the street lights with-(i) varying intensity of outer lights (ii) presence of any object.


COMPONENTS USED


Arduino UNO
Ultrasonic Sensor
5mm LEDs
560 ohm resistances
LDR
Bread board
Jumper wires




PRINCIPLE
	

This project is based on the principle of distance calculation of any arriving object, using ultrasonic sensor and switching on the lights which are present nearby, only when sufficient outer light is not present, using LDR.





DESCRIPTION
	

This project is a prototype of automatic power-saving street lights. Here, the LEDs represent the street lights. It mainly portrays a single lane, consisting of a series of lights.

 Arduino UNO, having the ATmega IC is used for programming the entire code involved in this idea. 

When any obstacle/object/vehicle arrives on the road, then the ultrasonic sensor’s triggered  output gets reflected back and is received as an input through the trigger pin. This signal is then  used for measuring the distance of the arriving object and the estimated time in which it will reach the end. That distance is then utilized for lightening the leds accordingly as the vehicle/man passes across the leds.
	
Now, the leds will not be glowing when there is daytime or sufficient amount of light present. This is an additional condition. Hence LDR (Light Dependent Resistor) is used along with the ultrasonic sensors, which will switch on the LEDs only when no light is present. LDRs are lights sensitive resistances whose resistance increase with the decreasing intensity of light and vice versa.
	
The distance of the object is displayed on the serial monitor, which can then be used for several purposes, like vehicle tracking, etc.



APPLICATIONS


Highways
Railways
Army


FUTURE SCOPE

Infrared sensors can be used for further improvisations in the project. If they be installed from place to place, then they can be used for sensing multiple objects and switch on the respective lights nearby and hence avoid accidents.

The readings from the ultrasonic sensor can be sent to highway patrol for the detection and tracking of any object/vehicle easily.

Thermal sensors can be added for tracking any off-road illegal activities, especially by sensing a sudden rise/fall in temperature due the presence of any object.
The intensity of the lights can be manipulated, by dimming the lights, if no object movement is detected, hence avoiding accidents and saving energy as well.




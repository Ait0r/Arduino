#Arduino KY-003 Hall magnetic sensor
The KY-003 is a magnetic switch. If no magnetic field is present, the signal line of the sensor is HIGH (3.5 V). If a magnetic field is presented to the sensor, the signal line goes LOW, at the same time the LED on the sensor lights up. The polarity of the magnetic field is of influence to the switching action. The front side of the sensor needs the opposite polarity as the back of the sensor to switch on.
In the example program the led on the Arduino (pin 13) will be turned on when a magnetic field is present.

#Schematic
* Pin - = GND, connect to GND of the Arduino
* Pin (middle pin) +5 v, connect to Arduino +5
* Pin S signal, connect to Arduino pin 10
Power consumption, 3 mA in rest, 8 mA when switched on

![Wiring](https://tkkrlab.nl/w/images/thumb/7/79/Hall_sensor.PNG/400px-Hall_sensor.PNG)

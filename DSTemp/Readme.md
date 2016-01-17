# Arduino KY-001 Temperature Sensor

The Arduino has many uses, one of the more popular uses is with temperature sensors. For this the Dallas Onewire DS18B20 is most used. In this example we use this onewire chip and make a sketch for reading the temperature.
With this sensor you can get the temperature in your room, car, whatever.
Product
As in the past the temperature sensor output is analog, we need to add additional A / D And D / A chip into Line conversion, for Arduino resources are not abundant external interface is a big challenge at the same time Utilization is not high. The new DS18B20 Temperature Sensor Module is a good solution for this, it use a unique bus line and economic package that make this sensor a good DIY component,

The module uses a single-bus digital temperature sensor DS18B20, the external power supply voltage Range is 3.0 V to 5.5 V, No standby power. Measurement temperature range of -55 ° C to +125 ℃, Fahrenheit equivalent 67 ° F to 257 ° F, -10 °C to +85 ° C range accuracy of ± 0.5 ° C.
the temperature sensor is a programmable resolution of 9 to 12 temperature conversion to 12-bit digital format With a maximum of 750 milliseconds formula User definable nonvolatile temperature alarm settings.
each DS18B20 contains a unique serial number, can be with a plurality ds18b20s Exists in a bus. Temperature sensor can be placed at different places in the detected temperature.
#Notes
* The DS18B20 and ordinary transistors look similiar, so be careful not to regard it as a generalPass transistor to avoid damage.
* In order to prevent damage to the DS18B20 ensure that the powerLine and ground are not reversed.
* The relevant technical data on the bus did not mention a single number that can be linked to how much DS18B20, But in practical applications are not as many, and we should pay attention to.
* There is a bus length limitation that should be taken in consideration when long-distance communications, consider bus distributed capacitance and resistance.
* Identify DS18B20 Temperature Sensor Module power line, ground, and data Line, power line and ground points connect to the Arduino test board +5 V, GND, Data bus connect to the digital port.

#Connecting
* Pin - = connect to Arduino GND
* Pin (middel) = connect to arduino +5V
* Pin S = Signal, in this example connect to Arduino Digital port 10

When everything is properly connected, there is a led on the module that blinks when the sensor is read.

![Wiring](http://www.icstation.com/images/big/productimages/2761/2761.JPG)

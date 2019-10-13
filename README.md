

##	INDEX
**1.Basics**
-   Arduino
	  -   Analog pins
	  -   Digital pins 
-   Bread board
	   -  	Connection pattern
  -   Infrared Sensors
	   -    Single IR
	   -    Array of IR
-  LDR Sensor
	 	   
**2.Motor drivers**
-   L293D
   -   L298N
   -   MDD10A
    
**3.Communication protocols**
-   SPI
   -   I2C
   -   UART


# INFORMATION
## BASICS

### Introduction to the Arduino Board

This is an outline of parts of the arduino board we generally come across:

![](https://www.arduino.cc/en/uploads/Reference/arduino_board.png)

Starting clockwise from the top center:

-   Analog Reference pin (orange)
-   Digital Ground (light green)
-   Digital Pins 2-13 (green)
-   Digital Pins 0-1/Serial In/Out - TX/RX (dark green) - _These pins cannot be used for digital i/o (**digitalRead** and **digitalWrite**) if you are also using serial communication (e.g. **Serial.begin**)_.
-   Reset Button - S1 (dark blue)
-   In-circuit Serial Programmer (blue-green)
-   Analog In Pins 0-5 (light blue)
-   Power and Ground Pins (power: orange, grounds: light orange)
-   External Power Supply In (9-12VDC) - X1 (pink)
-   Toggles External Power and USB Power (place jumper on two pins closest to desired supply) - SV1 (purple)
-   USB (used for uploading sketches to the board and for serial communication between the board and the computer; can be used to power the board) (yellow)


#### Digital Pins:

In addition to the specific functions listed below, the digital pins on an Arduino board can be used for general purpose input and output via the [pinMode()](https://www.arduino.cc/en/Reference/PinMode), [digitalRead()](https://www.arduino.cc/en/Reference/DigitalRead), and [digitalWrite()](https://www.arduino.cc/en/Reference/DigitalWrite) commands. Each pin has an internal pull-up resistor which can be turned on and off using digitalWrite() (w/ a value of HIGH or LOW, respectively) when the pin is configured as an input. The maximum current per pin is 40 mA.

-   **Serial: 0 (RX) and 1 (TX).** Used to receive (RX) and transmit (TX) TTL serial data.
- **External Interrupts: 2 and 3.** These pins can be configured to trigger an interrupt on a low value, a rising or falling edge, or a change in value.*
- **PWM: 3, 5, 6, 9, 10, and 11.** Provide 8-bit PWM output with the [analogWrite()](https://www.arduino.cc/en/Reference/AnalogWrite) function. 
- **BT Reset: 7.** (Arduino BT-only) Connected to the reset line of the bluetooth module.
-  **SPI: 10 (SS), 11 (MOSI), 12 (MISO), 13 (SCK).** These pins support SPI communication, which, although provided by the underlying hardware, is not currently included in the Arduino language.
-  **LED 13** There is a built-in LED connected to digital pin 13. When the pin is HIGH value, the LED is on, when the pin is LOW, it's off.

#### Analog Pins:

In addition to the specific functions listed below, the analog input pins support 10-bit analog-to-digital conversion (ADC) using the [analogRead()](https://www.arduino.cc/en/Reference/AnalogRead) function. Most of the analog inputs can also be used as digital pins: analog input 0 as digital pin 14 through analog input 5 as digital pin 19. Analog inputs 6 and 7 (present on the Mini and BT) cannot be used as digital pins.

-   **I2C: 4 (SDA) and 5 (SCL).** Support I2C (TWI) communication using the [Wire library](http://wiring.org.co/reference/libraries/Wire/index.html)



### Breadboard
A breadboard is sometimes known as a solderless breadboard. It has lots of holes that you can stick wires or electronic components into, and which are connected inside the breadboard. This lets you create a circuit containing multiple components without having to physically attach them to each other.
[Breadboard Image](https://en.wikipedia.org/wiki/File:400_points_breadboard.jpg)

#### Step 1: The Breadboard Connections
![Image result for breadboard connections](https://cdn.instructables.com/FTG/1AAH/F23XWM7G/FTG1AAHF23XWM7G.LARGE.gif?auto=webp&fit=bounds)
  
The top and bottom rows (the rows indicated by the blue) and are usually the (+) and (-) power supply holes and these move **horizontally** across the breadboard, while the holes for the components move **vertically** Each hole is connected to the many metal strips that are running underneath.  
  
Each wire forms a node. A node is a point in a circuit where two components are connected. Connections between different components are formed by putting their legs in a common node. On the bread board, a node is the row of holes that are connected by the strip of metal underneath.  
  
The long top and bottom row of holes are usually used for power supply connections.  

#### Step 2: Connecting the Components

 [![Picture of Connecting the Components](https://cdn.instructables.com/FZT/USFT/F2NOBNFA/FZTUSFTF2NOBNFA.LARGE.jpg?auto=webp&frame=1&fit=bounds)](https://cdn.instructables.com/FZT/USFT/F2NOBNFA/FZTUSFTF2NOBNFA.LARGE.jpg?auto=webp&fit=bounds) 

  
For chips with many legs (ICs), place them in the middle of the board so that half of the legs are on one side of the middle line and half are on the other side.  
  
A complete circuit might look like the one below.

#### Step 3: Building a Circuit on the Breadboard

 [![Picture of Building a Circuit on the Breadboard](https://cdn.instructables.com/FGT/UXY4/F2NOBNFR/FGTUXY4F2NOBNFR.LARGE.jpg?auto=webp&frame=1&fit=bounds)](https://cdn.instructables.com/FGT/UXY4/F2NOBNFR/FGTUXY4F2NOBNFR.LARGE.jpg?auto=webp&fit=bounds) 

The circuit schematic, and the layout on the breadboard will turn out entirely different. Anyone using a breadboard must focus on the **connections** rather than their place on the schematic.  
  
When you use switches or potentiometers, you must use **single-core** plastic-coated wire of 0.6mm diameter (the standard size). Stranded wire is not suitable because it will crumple when pushed into a hole and it may damage the board if strands break off.  
  
The rest of the circuit is built by placing components and connecting them together with  
jumper wires. Then when a path is formed by wires and components from the positive  
supply node to the negative supply node, we can turn on the power and current flows  
through the path and the circuit comes alive.

### Infrared Sensors

IR Sensor or Infrared Sensor has two main parts. IR Transmitter and IR Receiver. The work of IR transmitter or Infrared transmitter is to transmit the infrared waves whereas the work of IR receiver is to receive these infrared waves. IR receiver constantly sends digital data in the form of 0 or 1 to Vout pin of the sensor.
![Beginners guide to IR sensor](https://i1.wp.com/etechnophiles.com/wp-content/uploads/2018/10/ir-sensor-module-for-arduino-2f-rasberry-pi-500x500.jpg?resize=300%2C275&ssl=1)
#### Working of an IR sensor

If there is an object in front of IR sensor, the transmitted infrared waves from IR transmitter reflects from that object and is received by the IR receiver. IR sensor gives 0 in this condition. Whereas, if there is no object in front of the IR sensor, the transmitted infrared waves from IR transmitter is not received by the IR receiver. And IR sensor gives 1 in this condition.

For a white surface:

![Working of IR transmitter and receiver on White Surface](https://i1.wp.com/etechnophiles.com/wp-content/uploads/2018/10/Concept-of-White-Line-Follo.gif?resize=300%2C202&ssl=1)

For a black surface:

![](https://i2.wp.com/etechnophiles.com/wp-content/uploads/2018/10/Concept-of-Black-Line-Follo.gif?resize=300%2C205&ssl=1)

Pinout of an IR sensor:
1) Ground
2) 5 volt
3) Enable
4) Vout

[Labelled image of an IR sensor](http://henrysbench.capnfatz.com/henrys-bench/arduino-sensors-and-input/arduino-ir-obstacle-sensor-tutorial-and-manual/)

#### ---> IR SENSOR ARRAY
The IR sensor array is a device with 7 mounted infrared sensors. Each IR sensor is capable of detecting black and white colors. The array is capable of emitting sounds.

The IR array can perform detection at proper distances. The infrared sensors transmitters/receivers have optimal operating range of 0-5CM.

![Image result for array of ir sensors](https://cdn.instructables.com/FW5/62OO/J0MOPATB/FW562OOJ0MOPATB.LARGE.jpg?auto=webp&&frame=1&width=1024&fit=bounds)
In the IR array if each IR sensor detected black value is lower than the set black value ,the values will be assigned as shown below; the LED turns on.

| BIT | 		Name		 |
|--|--|
| Bit 0 | Black detection for IR sensor #1 |
| Bit 1 |Black detection for IR sensor #2
|Bit 2|Black detection for IR sensor #3|
| Bit 3 | Black detection for IR sensor #4 |
| Bit 4 |Black detection for IR sensor #5
|Bit 5|Black detection for IR sensor #6|
|  Bit 6| Black detection for IR sensor #7 |

### LDR Sensors
An LDR(Light Dependent Resistor) is a component that has a (variable) resistance that changes with the light intensity that falls upon it. This allows them to be used in light sensing circuits.

![A typical LDR (Light Dependent Resistor)](https://www.kitronik.co.uk/wp/wp-content/uploads/2015/03/how_a_light_dependant_resistor_works_typical_ldr.jpg)

The most common type of LDR has a resistance that falls with an increase in the light intensity falling upon the device (as shown in the image below). The resistance of an LDR may typically have the following resistances:

Daylight= 5000Ω

Dark= 20000000Ω

![Light Dependent Resistor LDR Circuit Symbol](https://www.kitronik.co.uk/wp/wp-content/uploads/2015/03/how_a-light_depedant_resistor_works_circuit_symbol.jpg)

Photoresistors are less light-sensitive devices than [photodiodes](https://en.wikipedia.org/wiki/Photodiode "Photodiode") or [phototransistors](https://en.wikipedia.org/wiki/Phototransistor "Phototransistor"): the two latter components are true semiconductor devices, while a photoresistor is a passive component and does not have a PN-junction.

![Related image](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTlbhmN3quytYAIikP1MEvFnvpY6k43Ybp2jJ4blhi1uAVO-aNx)



## MOTOR DRIVERS

### L293D Motor Driver IC

L293D is a typical Motor driver or Motor Driver IC which allows DC motor to drive on either direction. L293D is a 16-pin IC which can control a set of two DC motors simultaneously in any direction.

It works on the concept of H-bridge. H-bridge is a circuit which allows the voltage to be flown in either direction. As you know voltage need to change its direction for being able to rotate the motor in clockwise or anticlockwise direction, Hence H-bridge IC are ideal for driving a DC motor.

In a single L293D chip there are two h-Bridge circuit inside the IC which can rotate two dc motor independently. Due its size it is very much used in robotic application for controlling DC motors.

![Related image](https://robu.in/wp-content/uploads/2018/11/robu-5-11.jpg)

#### Working of L293D

There are 4 input pins for l293d, pin 2,7 on the left and pin 15 ,10 on the right as shown on the pin diagram. Left input pins will regulate the rotation of motor connected across left side and right input for motor on the right hand side. The motors are rotated on the basis of the inputs provided across the input pins as LOGIC 0 or LOGIC 1.

#### L293D Logic Table.

•**Pin 2** = **Logic 1** and **Pin 7** = **Logic 0** 
| Clockwise Direction  
• **Pin 2** = **Logic 0** and **Pin 7** = **Logic 1** 
| Anticlockwise Direction  
• **Pin 2** = **Logic 0** and **Pin 7** = **Logic 0**
 | Idle (No rotation) [Hi-Impedance state]  
• **Pin 2** = **Logic 1** and **Pin 7** = **Logic 1** 
| Idle (No rotation)

![https://www.rakeshmondal.info/pik/l293d%20cirucit%20diagram.png](https://www.rakeshmondal.info/pik/l293d%20cirucit%20diagram.png)

#### SCHEMATIC REPRESENTATION OF L293D PIN

![L293D IC Pin Configuration](https://www.elprocus.com/wp-content/uploads/2015/03/L293D-IC-Pin-Configuration.jpg)

 L293D IC Pin Configuration:

-  ##### Pin-1 (Enable 1-2): When the enable pin is high, then the left part of the IC will work otherwise it won’t work. This pin is also called as a master control pin for left part of IC.
- #####  Pin-2 (Input-1): When the input pin is high, then the flow of current will be through output 1
- #####  Pin-3 (Output-1): This output-1 pin must be connected to one of the terminals of the motor
- #####  Pin4 &5: These pins are ground pins
- #####  Pin-6 (Output-2): This pin must be connected to one of the terminals of the motor.
- #####  Pin-7 (Input-2): When this pin is HIGH then the flow of current will be though output 2
- #####   Pin-8 (Vcc2): This is the voltage pin which is used to supply the voltage to the motor.
- #####   Pin-16 (Vss): This pin is the power source to the integrated circuit.
- #####   Pin-15 (Input-4): When this pin is high, then the flow of current will be through output-4.
- #####  Pin-14 (Output-4): This pin must be connected to one of the terminals of the motor
- #####  Pin-12 & 13: These pins are ground pins
- #####   Pin-11 (Output-3): This pin must be connected to one of the terminals of the motor.
- #####   Pin-10 (Input-3): When this pin is high, then the flow of current will through output-3
- #####  Pin-9 (Enable3-4): When this pin is high, the right part of the IC will work, otherwise it won’t work. This pin is also called as a master control pin for the right part of the IC.


# Motor Touch Controller
<img src="https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/MotorTouchController/Touch%20Servo_bb.png" style="width:800px;height:auto;">

## 1. EasyDriver Board Setup
This setup can seem complicated but the wiring is simple
<ul>
 <li>Connect Driver STEP pin to Digital Pin 7</li>
 <li>Connect Driver DIR pin to Digital Pin 3</li>
 <li>Connect Driver MS1 pin to Digital Pin 1</li>
 <li>Connect Driver MS2 pin to Digital pin 5</li>
 <li>Connect Driver ENABLE prin to Digital pin 6</li>
 <li>Connect Touch Sensor to Digital Pin 2</li>
 <li>Connect Touch Sesnor(2) to Digital Pin 4</li>

## 2. Servo Setup
<img src="https://cdn.shopify.com/s/files/1/2311/3697/products/sg92r-digital-micro-servo-carbon-fiberglass-gear-arm-set-motors-towerpro-cool-components-615_800x600.jpg" style="width:300px;height:auto;">

In This example, we use a motor to change be an output for the touch controllers.

## 3. Sensor Setup

<img src="https://dfimg.dfrobot.com/data/DFR0030/20140710/_DSC0733.jpg?imageView2/1/w/564/h/376" style="width:300px;height:auto;">
In this example, we use an The Touch Sensor by DfRobot but the basic wiring principle is the same for almost all analog sensors. 

 <ul>
  <li>1. Connect the Sensor ground(Black) to ground on the Breadboard or Arduino Board(GND).</li>
  <li>2. Connect the Sensor Power(Red) to the Breadboard or Arduino Board(5V/VCC) </li>
  <li>3. Connect the Sensor Signal(Green/Blue) to the Arduino Board Digital port 2</li>
  <li>3. Connect the Sensor Signal(Green/Blue) to the Arduino Board Digital port 4</li>
</ul> 

## 4. Run The Project

 <ul>
  <li>1. Download the [ServoLightSensor](https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/main/ServoLightSensor/ServoLightSensor.ino)  file</li>
  <li>2. Open in Arduino IDE</li>
  <li>3. Run it!</li>
  <li>3. The the Servo arm should now respond to changes in the amout of light recived from the light sensor.</li>
</ul> 







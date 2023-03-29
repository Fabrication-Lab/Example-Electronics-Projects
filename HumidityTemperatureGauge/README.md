
# Getting started
<img src="https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/HumidityTemperatureGuage/HumidityTemperatureGauge_bb.png" style="width:800px;height:auto;">

We are going to be making a humidity gauge sensor, this will allow us to physically show on a gauge on the tempreture and the humidity. This is a perfect way to build your own sensor instead of buying one.

## 1. Sensor Setup
<img src="https://cdn.shopify.com/s/files/1/0176/3274/products/fermion-bme680-environmental-sensor-dfrobot-sen0375-39964564848835_800x.jpg?v=1671218970" style="width:300px;height:auto">

In This example, we use a the BME680 to gauge both the humidity and the tempreture so we can capture the data  
 <ul>
  <li>1. Connect the Sensor ground(Black) to ground on the Breadboard or Arduino Board(GND).</li>
  <li>2. Connect the Sensor Power(Red) to the Breadboard or Arduino Board(5V/VCC) </li>
  <li>3. Connect the Sensor Signal(Green/Blue) to the Arduino Board Digital Port(9)</li>
  <li>4. Conntct the Sensor SDL(Green/Blue) to the Arduino Board Digital Port(10)</li>o
</ul> 

## 2 Servo Setup
<img src="http://cdn.shopify.com/s/files/1/0254/1191/1743/products/2592_large_tower_pro_micro_servo_metal-gear_1024x.jpg?v=1645177228" style="width:300px;height:auto">
We will have 2 senors for boh the humidity and tempreture and as a percentage it can be used with a graphic to show the tempreture of the percentage of the humidity in the room
  <ul>
   <li>1. Connect Servo Ground(Black) to the gound on the Breadboard or Arduino Ground(GND)</li>
   <li>2. Connect Servo Power(Red) to the power on the Breadboard or Arduino(5V)</li>
   <li>3. Do this with the other sensor</li>
  </ul>

## 3. Run The Project
We can now start running some code!
 <ul>
  <li>1. Download the [ServoLightSensor](https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/HumidityTemperatureGuage/BME680_TemperatureHumiditySensor/BME680_TemperatureHumiditySensor.ino)  file</li>
  <li>2. Open in Arduino IDE</li>
  <li>3. Run it!</li>
  <li>3. And now the data should be getting collected.</li>
</ul> 







# PIR Sensor with LED Project
<img src="https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/PIRMotionSensor/Fritzing.png" style="width:800px;height:auto;">

We will be using the ada fruit PIR sensor and an LED strip to display that the sensor is being picked up. This can be used to record the amount of times motion has past through the sensor itself

_Note: that in this fritzing example we are using an LED strip but any LED can be used_

## The sensor
<img src="https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/PIRMotionSensor/proximity_pirsensor.jpg" style="width:300px;height:auto;">

The PIR sensor uses infared beams to detect motion within its fecinity

We will be using [PIR sensor](https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor) this will used in our example.

## The LED
<img src="https://cdn-shop.adafruit.com/970x728/1376-00.jpg" style="width:300px;height:auto">

The fritzing part and the image are both the same thing but is cut down for its length, the LED will be lit once the PIR detect motion. It is currently not programmed to show different colour lighting.

## The Program
<ul>
  <li>1. Download the [ServoLightSensor](https://github.com/Fabrication-Lab/Example-Electronics-Projects/blob/Added-fritzing-components/PIRMotionSensor/PIRMotionSensor.ino)  file</li>
  <li>2. Open in Arduino IDE</li>
  <li>3. Run it!</li>
  <li>3. The LED will not respond if there is motion in front of the PIR sensor</li>
</ul> 

_Note: That there is a LOW and HIGH state of the sensor and can be customised in the program for preferences_
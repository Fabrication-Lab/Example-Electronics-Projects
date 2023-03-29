#include "DFRobot_BME680_I2C.h"
#include "Wire.h"
#include<Servo.h>//include servo library


DFRobot_BME680_I2C bme(0x76);  //0x77 I2C address
Servo servo1;// The servo being used for Temperature
Servo servo2;// The servo being used for humidity

float temperatureVal;                               //create a variable to store the temperature value
float humidityVal;                               //create a variable to store the humidity value

void setup()
{
  uint8_t rslt = 1;
  servo1.attach(9);// //attache servo1 to Digital port 9
  servo2.attach(10);// //attache servo1 to Digital port 10
  Serial.begin(9600);// open the serial port, set the baud rate to 9600 bps
  while (!Serial);
  delay(1000);
  Serial.println();
  while (rslt != 0) {
    rslt = bme.begin();
    if (rslt != 0) {
      Serial.println("bme begin failure"); //Will give a signal for failure 
      delay(2000);
    }
  }
  Serial.println("bme begin successful"); //Will give a signal for success
}

void loop() //This is a constant loop for the gauge to physically show the humidity and temperature
{
  bme.startConvert();
  delay(1000);
  bme.update();
  Serial.println();
  Serial.print("temperature(C) :");Serial.println(bme.readTemperature() / 100, 2);
  Serial.print("humidity(%rh) :");Serial.println(bme.readHumidity() / 1000, 2);
  
  temperatureVal=bme.readTemperature() / 100;   
  humidityVal= bme.readHumidity() / 1000;

  temperatureVal=map(temperatureVal,20,30,0,180);  // mappling the temperature val variable from 20-30 Ceclius to the servo's rotation value from 0 to 180 degrees
  humidityVal=map(humidityVal,25,45,0,180);  // mappling the humidity val variable from 25-45 percent Humidity to the servo's rotation value from 0 to 180 degrees
  
  servo1.write(temperatureVal);          //write temperature val value to servo1
  servo2.write(humidityVal);          //write humidty val value to servo2
  delay(100);                 //wait 100 miliseconds
}

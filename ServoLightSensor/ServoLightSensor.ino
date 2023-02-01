#include<Servo.h>//include servo library
 Servo servo1;// The servo being used

void setup()
{
  Serial.begin(9600); // open the serial port, set the baud rate to 9600 bps
  servo1.attach(9);//attach the servo to digital port 9 on the board
}
void loop()
{
      int val;                    //create a variable to store the analog light signal
      val=analogRead(0);          //connect grayscale sensor to Analog 0
      Serial.println(val,DEC);    //print the value to serial.Not Necessary for the code to run
      val=map(val,0,1023,0,180);  // mappling the val variable to the servo's rotation value from 0 to 180 degrees
      servo1.write(val);          //write val value to the servo
      delay(100);                 //wait 100 miliseconds
}
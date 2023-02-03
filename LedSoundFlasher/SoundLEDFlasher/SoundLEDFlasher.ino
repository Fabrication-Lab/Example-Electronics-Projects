//using DFRobot Alnalog Sould Level Meter v1.0
#define SoundSensorPin A1  //Connect Stepper Motor Driver STEP pin to Anaolog
#define VREF  5.0         //voltage on AREF pin,default:operating voltage



float decibleTreshhold=80.0;  //The Treshold decible value that the led will flash
void setup()
{
    Serial.begin(115200);     //set the baud rate
    pinMode(LED_BUILTIN, OUTPUT);//set the built-in LED on the Arduino board to output
}

void loop()
{
    float voltageValue;                                         //create variable to store the voltage value
    float dbValue;                                              //create variable to store the decible value
    voltageValue = analogRead(SoundSensorPin) / 1024.0 * VREF;  //get the decible level in the form of a voltage signal
    dbValue = voltageValue * 50.0;                              //convert voltage to decibel value
    Serial.println(dbValue,1);                                  //print the decible value
    delay(125);                                                 //wait a short amout

    if(dbValue>=decibleTreshhold)
    {
      digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on by making the voltage high
      delay(200);                       //wait a short amout
    }
    else
    {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    }
}

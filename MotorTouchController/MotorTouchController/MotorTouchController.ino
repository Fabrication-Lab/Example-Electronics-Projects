// using EasyDriver - Stepper Motor Driver and 9V power supply for Stepping Motor
int stp=7;                  //Connect Stepper Motor Driver STEP pin to Digital Pin 7
int dir=3;                  //Connect Stepper Motor Driver DIR pin to Digital Pin 3
int MS1=1;                  //Connect Stepper Motor Driver MS1 pin to Digital Pin 1
int MS2=5;                  //Connect Stepper Motor Driver MS2 pin to Digital Pin 5
int EN=6;                   //Connect Stepper Motor Driver ENABLE pin to Digital Pin 6
int KEY = 2;                //Connect Touch sensor on Digital Pin 2
int KEY2 = 4;               //Connect Touch sensor on Digital Pin 4

//Setup all pins to their appropritate function
void setup()
{
  pinMode(KEY, INPUT);        //Set touch sensor 1 pin to input mode
  pinMode(KEY2, INPUT);       //Set touch sensor 2 pin to input mode
  pinMode(stp, OUTPUT);       //Set Stepper Motor Driver STEP pin to output mode
  pinMode(dir, OUTPUT);       //Set Stepper Motor Driver DIR pin to output mode
  pinMode(MS1, OUTPUT);       //Set Stepper Motor Driver MS1 pin to output mode
  pinMode(MS2, OUTPUT);       //Set Stepper Motor Driver MS2 pin to output mode
  pinMode(EN, OUTPUT);        //Set Stepper Motor Driver EN pin to output mode
  resetEDPins();              //Set step, direction, microstep and enable pins to default states
  Serial.begin(9600);         //Open Serial connection for debugging
}

//Reverse default microstep mode function. Moves the Stepper motor in the reverse direction
void ReverseStepDefault()
{
  Serial.println("Moving in reverse at default step mode.");
  digitalWrite(dir, HIGH);  //Pull direction pin high to move in "reverse"
  for(int x= 0; x<1000; x++)    //Loop the stepping enough times for motion to be visible. can
  {
    digitalWrite(stp,HIGH); //Trigger one step in the motor
    delay(1);               //wait a set amount
    digitalWrite(stp,LOW);  //Pull step pin low so it can be triggered again
    delay(1);               //wait a set amount
  }
}


//Default microstep mode function. Moves the Stepper motor in the forward direction
void StepForwardDefault()
{
  Serial.println("Moving forward at default step mode.");
  digitalWrite(dir, LOW);  //Pull direction pin low to move "forward"
  for(int x= 0; x<1000; x++)  //Loop the forward stepping enough times for motion to be visible
  {
    digitalWrite(stp,HIGH); //Trigger one step forward
    delay(1);               //wait a set amount
    digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
    delay(1);              //wait a set amount
  }
}

//Reset all Easy Driver pins to default states
void resetEDPins()
{
  digitalWrite(stp, LOW);
  digitalWrite(dir, LOW);
  digitalWrite(MS1, LOW);
  digitalWrite(MS2, LOW);
  digitalWrite(EN, HIGH);
}


//loop function
void loop()
{
  digitalWrite(EN, LOW);      //Pull enable pin low to allow motor control
  if(digitalRead(KEY)==HIGH)  //If touch sensor 1 detects a touch, then execute the following code block
  {
    StepForwardDefault();     //Move the Motor in the forward direction
  }
  if(digitalRead(KEY2)==HIGH) //If touch sensor 2 detects a touch, then execute the following code block
  {
    ReverseStepDefault();     //Move the Motor in the reverse direction
  }
  resetEDPins();              //reset all stepper motor pins
}


//C++ code

#include <Servo.h>
char direction[5] ; // left or right 
Servo servo_9;

void setup()
{
  pinMode(4, INPUT);
  Serial.begin(9600);
  servo_9.attach(9, 500, 2500);
  
}


void loop()
{
  direction = serial.readString();
  
  if (direction.indexOf("right")> -1) { 
      servo_9.write(1);
      delay(10);
      servo_9.write(180);
      delay(10); // Wait for 10 millisecond(s)
    
  } else if (direction.indexOf("left")> -1){ 
      servo_9.write(180);
      delay(10);
      servo_9.write(1);
      delay(10); // Wait for 10 millisecond(s)
    
  } else{
    servo_9.write(0);
  }
  
}
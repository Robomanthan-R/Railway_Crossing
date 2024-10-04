#include <Servo.h>
int ir1 = 11;
int ir2 = 12;
Servo myservo1;

void setup()
{
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  myservo1.attach(8);
}

void loop()
{
  if (digitalRead(ir1) == LOW)
  {
    myservo1.write(90);
  }
  else if (digitalRead(ir2) == LOW)
  {
    myservo1.write(0);
  }
}
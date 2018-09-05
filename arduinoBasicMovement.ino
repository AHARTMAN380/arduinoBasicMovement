#include <Servo.h>

Servo left;
Servo right;



void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
left.attach(11);
right.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:

  goForward(2000);
  turnLeft();
  stopMoving();
  delay(100);
}

void goForward(int cycles)
{
  left.writeMicroseconds(1700);
  right.writeMicroseconds(1300); 
  delay(cycles);
}

void stopMoving()
{
  left.writeMicroseconds(1500);
  right.writeMicroseconds(1500);
}
void turnLeft()
{
  right.writeMicroseconds(1300);
  left.writeMicroseconds(1500);
  delay(900);
  stopMoving();
}


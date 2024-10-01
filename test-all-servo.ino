#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int servoPos = 0;

void setup() {
  servo1.attact(3);
  servo1.attact(5);
  servo1.attact(6);
  servo1.attact(9);

}

void loop() {
  //scan from 0 to 180 degrees
  for(servoPos = 0; servoPos < 180; servoPos++){

  servo1.write(servoPos);
  servo2.write(servoPos);
  servo3.write(servoPos);
  servo4.write(servoPos);
  delay(100);
  }

  //now scan back
  for(servoPos = 180; servoPos > 0; servoPos--)
  {
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
    delay(100);
  }
}

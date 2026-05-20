#include <Servo.h>

Servo servoX;
Servo servoY;
Servo servoC;
Servo servoZ;

int servoPosX = 0;
int servoPosY = 0;
int servoPosC = 0;
int servoPosZ = 0;

void setup() {
  // servoX.attach(2);
  servoY.attach(3);
  // servoC.attach(4);
  // servoZ.attach(5);

}

void loop() {
  //X
  for(servoPosX = 0; servoPosX < 90; servoPosX++)
  {
  servoX.write(servoPosX);
  delay(20);
  }
  servoX.detach();
  delay(1000);
  // Y
  for(servoPosY = 0; servoPosY < 15; servoPosY++)
  {
  servoY.write(servoPosY);
  delay(10);
  }
  servoY.detach();
  delay(1000);
  //  C
  for(servoPosC = 0; servoPosC < 90; servoPosC++)
  {
  servoC.write(servoPosC);
  delay(10);
  }
  delay(1000);
  // Z
  for(servoPosZ = 0; servoPosZ < 15; servoPosZ++)
  {
  servoZ.write(servoPosZ);
  delay(20);
  }
  delay(1000);

  //C
  for(servoPosC = 90; servoPosC > 0; servoPosC++)
  {
  servoC.write(servoPosC);
  delay(10);
  }
  delay(1000);
  // Z
  for(servoPosZ = 15; servoPosZ < 0; servoPosZ++)
  {
  servoZ.write(servoPosZ);
  delay(20);
  }
  delay(1000);
    // Y
  servoY.attach(3);
  for(servoPosY = 15; servoPosY < 45; servoPosY++)
  {
  servoY.write(servoPosY);
  delay(5);
  }
  servoY.detach();
  delay(1000);

  // X
  servoX.attach(2);
  for(servoPosX = 90; servoPosX > 0; servoPosX--)
  {
  servoX.write(servoPosX);
  delay(20);
  }
  delay(1000);
  servoX.detach();
  // Z
  for(servoPosZ = 0; servoPosZ > 15; servoPosZ++)
  {
  servoZ.write(servoPosZ);
  delay(20);
  }
  delay(1000);
  //C
  for(servoPosC = 0; servoPosC < 90; servoPosC++)
  {
  servoC.write(servoPosC);
  delay(10);
  }
  for(servoPosC = 90; servoPosC > 0; servoPosC++)
  {
  servoC.write(servoPosC);
  delay(10);
  }
  delay(1000);
  // Z
  for(servoPosZ = 15; servoPosZ < 0; servoPosZ++)
  {
  servoZ.write(servoPosZ);
  delay(20);
  }
    delay(1000);
  
  // X
  servoX.attach(2);
  for(servoPosX = 0; servoPosX < 90; servoPosX++)
  {
  servoX.write(servoPosX);
  delay(20);
  }
  servoX.detach();
  // servoX.write(0);
  // servoY.write(70);
  // servoC.write(0);
  // servoZ.write(0);
}

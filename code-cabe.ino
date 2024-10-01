#include <Servo.h>
Servo servo1;
Servo servo2;

int x;
int y;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  for(x = 0; x <= 180; x++)
  {
    servo1.write(x);
    delay(50);
    if(x == 0)
    {
        servo2.write(45);
        delay(35);
    }
    else if(x == 90)
    {
      servo2.write(90);
      delay(35);
    }
    else if(x == 180)
    {
      servo2.write(150);
      delay(100);
    }
  }

  for(y = 180; y >= 0; y--)
  {
    servo1.write(y);
    delay(50);
    if(y == 180)
    {
      servo2.write(150);
      delay(35);
    }
    else if(y == 90)
    {
      servo2.write(165);
      delay(35);
    }
    else if(y == 0)
    {
      servo2.write(180);
      delay(35);
    }
  }
//   servo1.write(0);
//   servo2.write(0);
}

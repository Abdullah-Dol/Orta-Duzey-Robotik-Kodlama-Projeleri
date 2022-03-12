
#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);

}

void loop()
{
  // Servo 0 ile 180 derece arasında sür
  // 1 dereceyle
  for (pos = 0; pos <= 180; pos += 1) {
    // for döngüsü: (başlangıç değeri; koşul; değişim-miktarı) 
    servo_9.write(pos);
    
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
  
    servo_9.write(pos);
  
    delay(10); 
  }
}

// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...

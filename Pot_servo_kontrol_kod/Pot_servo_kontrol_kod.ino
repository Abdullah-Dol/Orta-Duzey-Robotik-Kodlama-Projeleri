
#include <Servo.h>          // Servo motor kütüphanesini çağırıyor

Servo myservo;  

int potpin = 0;             // potansiyometreyi bağlamak için kullanılan analog pim
int val;    

void setup()
{
  myservo.attach(9);        // Servoyu 9 numaralı pim üzerine takıyoruz
}

void loop() 
{ 
  val = analogRead(potpin);            // potansiyometrenin değerini okur (0 ile 1023 arasındaki değer) 
  val = map(val, 0, 1023, 0, 180);     // servo ile birlikte kullanmak için ölçekleyin (0 ile 180 arasındaki değer) 
  myservo.write(val);                  // servo konumunu ölçeklenmiş değere göre ayarlar 
  delay(15);                           // servonun oraya gelmesini bekler 
} 


// Dol Academy eğitim içeriğinden de ulaşabilirisiniz...

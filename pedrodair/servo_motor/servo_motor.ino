  // encender codigo
#include <Servo.h>
 Servo servooda; // Crea el objeto servo 
  int pinservo = 2; // servo conectado a pin 2 
  int pulsomin = 700; // 1 mseg 0 grados
  int pulsomax = 2900; // 2 mseg 180
  int valorpot;
  int angulo;
  int pot = 0;
  int pasoangulo = 5;
void setup() {
Serial.begin(9600); // se inicializa la salida serial
servooda.attach(pinservo,pulsomin,pulsomax);
  
  pinMode (8, INPUT_PULLUP); // BOTON ENTRADA DISMINUIR
  pinMode (9, INPUT_PULLUP);// BOTON AUMENTAR
  Serial.println("Proyeto Servo Oda");
}

void loop() {
 
  
 valorpot = analogRead(pot);
 angulo = map(valorpot, 0, 1023, 0, 180);
 servooda.write(angulo);
 delay (100);
 Serial.println(valorpot);
 Serial.println(angulo);
    
while(digitalRead(8) == LOW){
  if (angulo > 0 && angulo <= 180){
    angulo = angulo - pasoangulo;
    if (angulo < 0 ){
      angulo = 0;
      } else{
        servooda.write(angulo);
        Serial.println(angulo);
        }
    
    }
  }


while(digitalRead(9) == LOW){
  if (angulo > 0 && angulo <= 180){
    angulo = angulo + pasoangulo;
    if (angulo > 180 ){
      angulo = 180;
      } else{
        servooda.write(angulo);
        Serial.println(angulo);
        }
    
    }
  }
  
    
    }

    

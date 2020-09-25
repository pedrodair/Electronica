#include <IRremote.h>
int RECV_PIN = 6;
long LED_ON  = 0x00FF629D;
long LED_OFF = 0X00FFA25D;
long MOTOR_ON  = 0X00FF22DD;
long MOTOR_OFF = 0X00FF02FD;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(RECV_PIN, INPUT);  
  pinMode(2, OUTPUT); 
  irrecv.enableIRIn(); // Start the receiver
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}
void loop() {
  int i=0;
  Serial.println(results.value, HEX);
   if (irrecv.decode(&results)) 
   {
     irrecv.resume(); // Receive the next value
     if (results.value == LED_ON )
     
      {
       digitalWrite(2,HIGH);
       
      }
    if (results.value == LED_OFF )
      {
      digitalWrite(2,LOW);
      }
    if (results.value == MOTOR_ON )
      {
      digitalWrite(9,HIGH);
      
      }
      if (results.value == MOTOR_OFF )
      {
      digitalWrite(9,LOW);
      
      }
   }   
 }

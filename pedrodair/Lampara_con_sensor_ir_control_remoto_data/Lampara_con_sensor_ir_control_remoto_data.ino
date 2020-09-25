#include <IRremote.h>
int RECV_PIN = 6;
long LED_ON  = C1AA29D6;
long LED_OFF = C1AA0EF1;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(RECV_PIN, INPUT);  
  pinMode(2, OUTPUT); 
  irrecv.enableIRIn(); // Start the receiver
  Serial.begin(9600);
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
   }   
 }

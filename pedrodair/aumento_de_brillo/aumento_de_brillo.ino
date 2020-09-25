 int brillo = 0;
 const int led = 3; // led conectado al pin 3
void setup() {
  // put your setup code here, to run once:
pinMode (3, OUTPUT);// LED DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:

for(brillo = 0 ; brillo < 256; brillo++){ // brillo en aumento
analogWrite(led,brillo); 
delay(20);
}

for(brillo = 255 ; brillo >= 0; brillo--){  // brillo en decremento
analogWrite(led,brillo); 
delay(20);
}
}

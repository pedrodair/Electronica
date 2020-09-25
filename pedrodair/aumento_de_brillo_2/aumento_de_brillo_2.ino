 int brillo = 0;
 const int led = 3; // led conectado al pin 3
 const int potenciometro = 0; // potenciometro
void setup() {
  // put your setup code here, to run once:
pinMode (3, OUTPUT);// LED DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:

brillo = ((analogRead(potenciometro)*255)/1024); // 1024 es el maximo valor del potenciometro debe ser convertido a 255 para maximo para salidas digitales
analogWrite(led,brillo) ;
}

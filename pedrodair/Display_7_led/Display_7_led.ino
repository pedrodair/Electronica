
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int p = 9;
int poten = 0;
int numero = 0;
const int led = 10;
int brillo;

void setup() {
  Serial.begin(9600); // se inicializa la salida serial
  
  pinMode (a, OUTPUT); // LED A
  pinMode (b, OUTPUT); // LED B
  pinMode (c, OUTPUT); // LED C
  pinMode (d, OUTPUT); // LED D
  pinMode (e, OUTPUT); // LED E
  pinMode (f, OUTPUT); // LED F
  pinMode (g, OUTPUT); // LED G
  pinMode (led, OUTPUT);  // LED CAMBIO DE BRILLO
  }

void loop() {
poten = analogRead(0);
Serial.println(poten);
delay (100);
if(poten > 877 && poten <= 1023){
  numero = 9;
  }else{
if(poten > 778 && poten <= 875){
  numero = 8;
  }else{
  if(poten > 680 && poten <= 777){
  numero = 7;
  }else{
  if(poten > 581 && poten <= 679){
  numero = 6;
  }else{  
   if(poten > 483 && poten <= 580){
  numero = 5;
  }else{
  if(poten > 385 && poten <= 482){
  numero = 4;
  }else{
    if(poten > 286 && poten <= 384){
  numero = 3;
  }else{
  if(poten > 188 && poten <= 285){
  numero = 2;
  }else{  
  if(poten > 89 && poten <= 187){
  numero = 1;
  }else{  
  numero = 10;
  }
  }
  }
  }
  }
  }
  }
  }
  }
    
switch (numero) {
  case 1:
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(p,HIGH);
   analogWrite(led, 25);
   break;
  case 2:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
   analogWrite(led, 50);
    break;
    case 3:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 75);
    break;
    case 4:
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 100);
    break;
    case 5:
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 125);
    break;
    case 6:
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 150);
    break;
    case 7:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(p,HIGH);
    analogWrite(led, 175);
    break;
    case 8:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 200);
    break;
    case 9:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(p,HIGH);
    analogWrite(led, 255);
    break;
    case 10:
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(p,HIGH);
    analogWrite(led, 0);
    break;
    
  default:
    // statements
    break;

}
}

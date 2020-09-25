
const int ledrojo = 3; // led conectado al pin 3
const int ledverde = 5; // led conectado al pin 5
const int sensor = 0; // Sensor temperatura
long milivolt;        //milivoltios para el calculo de temperatura para pasar a celcius
long temp;            // para la temperatura en celcius
int brillo;           // brillo del lcd
void setup() {
  pinMode (3, OUTPUT);// LED DE SALIDA ROJO
  pinMode (5, OUTPUT);// LED DE SALIDA VERDE
  Serial.begin(9600);  //inicio de la comuniccion serial
  
}

void loop() {
  
milivolt = (analogRead(sensor) * 5000L) / 1023; // calcula los mV en la entrada
temp = milivolt / 10;

Serial.print("temp: ");
Serial.print(temp);
Serial.println(" grados");
delay (600);

//brillo = map(temp, 20, 30, 0, 255); // ajustamos la escala de temperatura para usar analogwrite
//brillo = constrain(brillo,0,255); //limitar rango de brillo 

analogWrite(ledrojo, brillo);

if((temp >= 24)){
      digitalWrite(3,HIGH); // led rojo
      digitalWrite(5,LOW); // led verde   
    }

    else {

    if((temp <= 23)){
      digitalWrite(5,HIGH); // led verde
      digitalWrite(3,LOW); // led verde    
   }
    }

}

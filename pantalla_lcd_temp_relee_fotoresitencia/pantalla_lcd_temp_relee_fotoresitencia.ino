#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);    
const int puertotemp = 0; // Sensor temperatura
const int puertoluz = 5; // Sensor temperatura
long milivolt;
long temp;
int sensorluz=0;


void setup()

  {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);  //inicio de la comuniccion serial
//  lcd.begin(16,2);      // LCD's primer valor numero de columnas y esl segundo numero de filas
//  lcd.setCursor(0,0);   // se hubica en la primera columna primera fila
//  lcd.print("Temp  "); //// imprime en el lcd.
}
void loop()
{

  // configuracion sensor de temperatura
 milivolt = (analogRead(puertotemp) * 5000L) / 1023; // calcula los mV en la entrada
 temp = milivolt / 10;
 // configuracion sensor de luz
 sensorluz = analogRead(puertoluz);
  lcd.begin(16,2);      // LCD's primer valor numero de columnas y esl segundo numero de filas
  lcd.setCursor(0,0);   // mueve el cursor to column 0, line 0
  lcd.print("Temp  "); //// imprime en el lcd.
  lcd.setCursor(10,0);   // mueve el cursor to column 0, line 10
  lcd.print("Luz "); //// imprime en el lcd.
  lcd.setCursor(0,1);
  lcd.print(temp); //// imprime en el lcd.
  lcd.setCursor(10,1);
  lcd.print(sensorluz); //// imprime en el lcd.
  Serial.print(temp);
  Serial.println(" grados centigrados");
  delay(1000);
  //activacion del relee
  if (temp >= 30) {
   
    digitalWrite(10,HIGH);
    delay(1000);
    } else{
      digitalWrite(10,LOW);
      }
      
     
   Serial.print("Valor del sensor de Luz ");
   Serial.print(sensorluz);
   Serial.println(" de 1024");
   
if (sensorluz >= 900) {

    digitalWrite(11,HIGH);
    
    } else{
      digitalWrite(11,LOW);
      }

  
  }

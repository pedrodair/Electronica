#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);    

int IZTRIG = 0;      // trigger en pin 10
int IZECO = 1;      // echo en pin 9
int DERETRIG = 12;      // trigger en pin 10
int DEREECO = 13;      // echo en pin 9
int IDURACION;
int IDISTANCIA;
int DDURACION;
int DDISTANCIA;


void setup()

  {
  pinMode(IZTRIG, OUTPUT);   // trigger como salida
  pinMode(IZECO, INPUT);    // echo como entrada
  pinMode(DERETRIG, OUTPUT);   // trigger como salida
  pinMode(DEREECO, INPUT);    // echo como entrada
  Serial.begin(9600);  //inicio de la comuniccion serial

}
void loop()
{

  // configuracion sensor IZQUIERDO
  digitalWrite(IZTRIG, HIGH);    // generacion del pulso a enviar
  delay(1);       // al pin conectado al trigger
  digitalWrite(IZTRIG, LOW);    // del sensor
  
  IDURACION = pulseIn(IZECO, HIGH);  // con funcion pulseIn se espera un pulso
            // alto en Echo
  IDISTANCIA = IDURACION / 58.2;    // distancia medida en centimetros
  Serial.println(IDISTANCIA);    // envio de valor de distancia por monitor serial
  delay(200);       // demora entre datos
  
  // configuracion sensor DERECHO
  digitalWrite(DERETRIG, HIGH);    // generacion del pulso a enviar
  delay(1);       // al pin conectado al trigger
  digitalWrite(DERETRIG, LOW);    // del sensor
  
  DDURACION = pulseIn(DEREECO, HIGH);  // con funcion pulseIn se espera un pulso
            // alto en Echo
  DDISTANCIA = DDURACION / 58.2;    // distancia medida en centimetros
  Serial.println(DDISTANCIA);    // envio de valor de distancia por monitor serial
  delay(200);       // demora entre datos

 
  lcd.begin(16,2);      // LCD's primer valor numero de columnas y esl segundo numero de filas
  lcd.setCursor(0,0);   // mueve el cursor to column 0, line 0
  lcd.print("IZQ"); //// imprime en el lcd.
  lcd.setCursor(10,0);   // mueve el cursor to column 0, line 10
  lcd.print("DERE "); //// imprime en el lcd.
  lcd.setCursor(0,1);
  lcd.print(IDISTANCIA); //// imprime en el lcd.
  lcd.setCursor(10,1);
  lcd.print(IDISTANCIA); //// imprime en el lcd.
  delay(1000);
  /*activacion del relee
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
*/
  
  }

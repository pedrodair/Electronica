#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0,1,2,3,4,5,6,7,8,9,13);    
const int sensor = 0; // Sensor temperatura
long milivolt;
long temp;


void setup()

  {

  
}
void loop()
{
 milivolt = (analogRead(sensor) * 5000L) / 1023; // calcula los mV en la entrada
 temp = milivolt / 10;

  
  lcd.begin(16,2);      // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0);   // set the cursor to column 0, line 0
  lcd.print("Temperatura"); //// Print a message to the LCD.
  lcd.setCursor(0,1);   // set the cursor to column 0, line 1
  lcd.print(temp);  //Print a message to the LCD.
  
  }

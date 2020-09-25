//Declaramos los pines qde conexión del display
const int pins[7] = { 2, 3, 4, 5, 6, 7, 8 }; 

//Declaramos los numeros para el ánodo común
const byte numbersDisplayAnode[10] = {0b1000000,     //0
                          0b1111001,          //1
                          0b0100100,          //2
                          0b0110000,          //3
                          0b0011001,          //4
                          0b0010010,          //5
                          0b0000010,          //6
                          0b1111000,          //7
                          0b0000000,          //8
                          0b0010000};         //9

void setup() {
  //Ponemos los pines como salida
  for(int i = 0; i < 7; i++) {
    pinMode(pins[i], OUTPUT);  
  }

  //Iniciamos el display en 0
  segmentoluz(0);
}

void loop() {
  for(int i = 0; i < 10; i++) {
    segmentoluz(i);
    delay(1000);
  }
}

/**
 * Esta función permite encender el segmento con el número 
 * pasado como argumento
 * 
 * int number Número del 0 al 9
 */
void segmentoluz(int number) {
  byte numberBit = numbersDisplayAnode[number];
  for (int i = 0; i < 7; i++)  {
    int bit = bitRead(numberBit, i);
    digitalWrite(pins[i], bit);
  }
}

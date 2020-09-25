  // encender codigo

  int estado = 0;
  int salida = 0; // si salida vale 1 encendido si vale 0 apagado
  int anterior = 0;
void setup() {

  pinMode (9, INPUT); // BOTON ENTRADA
  pinMode (4, OUTPUT);// LED DE SALIDA
  

}

void loop() {
  estado = digitalRead(9);// leer estado del boton
    
    if((estado == HIGH) && anterior == LOW){
      salida = 1 - salida;
    }
     anterior == estado; 
    if(salida == 1){
    digitalWrite(4,HIGH); //ENCENDER LED
       
    }
    else {
      digitalWrite(4,LOW); // APAGAR LED
      }
            
    }

/**********************************************************************************
**                                                                               **
**                             DAU DE LEDS                                       **
**                                                                               **
**   albert segui                                27/03/17                        **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ************************************************************

//********** Setup ****************************************************************
  


void setup() {
  
   //ASIGNO LES SORTIDES
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  // S'ENCEN EL NUMERO 1
   digitalWrite(4,LOW);    
  digitalWrite(5, LOW);    
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   delay(500);

    // S'ENCEN EL NUMERO 2
   digitalWrite(4,HIGH);    
  digitalWrite(5, LOW);    
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   delay(500);

 // S'ENCEN EL NUMERO 3
   digitalWrite(4,HIGH);    
  digitalWrite(5, LOW);    
  digitalWrite(6, LOW);  
  digitalWrite(7, HIGH);  
  digitalWrite(8, LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   delay(500);
  
   // S'ENCEN EL NUMERO 4
   digitalWrite(4,HIGH);    
  digitalWrite(5, LOW);    
  digitalWrite(6, HIGH);  
  digitalWrite(7, LOW);  
  digitalWrite(8, HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   delay(500);

    // S'ENCEN EL NUMERO 5
   digitalWrite(4,HIGH);    
  digitalWrite(5, LOW);    
  digitalWrite(6, HIGH);  
  digitalWrite(7, HIGH);  
  digitalWrite(8, HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   delay(500);

    // S'ENCEN EL NUMERO 6
   digitalWrite(4,HIGH);    
  digitalWrite(5, HIGH);    
  digitalWrite(6, HIGH);  
  digitalWrite(7, LOW);  
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
   delay(500);


   

}

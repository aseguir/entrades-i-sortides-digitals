/**********************************************************************************
**                                                                               **
**                              NOM                                              **
**                                                                               **
**  ALBERT SEGUÏ                                      20/03/2017                 **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
  //ASIGNO LES VARIABLES
int  E= 2;
int D = 3;
int C= 4;
int B = 5;
int F = 6;
int A= 7;
int G = 8;
//*********************************** SETUP ***************************************
void setup() {
  // put your setup code here, to run once:
  //ASIGNO LES SORTIDES
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode( G,OUTPUT);

}
void loop() {
  // put your setup code here, to run once:
  //LLETRA A
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);  
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);  
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(500);

  //LLETRA L
digitalWrite(A, LOW);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);  
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);  
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  delay(500);  

  //LLETRA B
  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);  
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);  
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(500); 

   //LLETRA A
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);  
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);  
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(500);
  
  //TEMPS
   digitalWrite(A, LOW);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);  
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);  
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);  

}




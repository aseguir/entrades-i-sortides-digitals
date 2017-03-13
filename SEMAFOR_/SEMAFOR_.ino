/**********************************************************************************
**                                                                               **
**                             SEMAFOR                                           **
**                                                                               **
**   albert segui                                13/03/17                        **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ************************************************************
//ASIGNO LES VARIABLES
int  AR = 12;
int  AA = 11;
int AV = 10;
int BR = 9;
int BA = 8;
int BV = 7;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
  //ASIGNO LES SORTIDES
pinMode(AR, OUTPUT);
pinMode(AA, OUTPUT);
pinMode(AV, OUTPUT);
pinMode(BR, OUTPUT);
pinMode(BA, OUTPUT);
pinMode(BV, OUTPUT);
}

void loop() {
  // SENCEN EL BR I AR
  digitalWrite(AR, HIGH);    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, HIGH);
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW);    

 delay(500);
 digitalWrite(AR, HIGH); //ENGEGAT   
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, LOW); 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, HIGH); //ENGEGAT
delay(500);

digitalWrite(AR, HIGH);  // ENGEGAT 
  digitalWrite(AA, LOW);    
  digitalWrite(AV,LOW);  
  digitalWrite(BR, LOW); 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, HIGH); //ENGEGAT 
delay(500);

digitalWrite(AR, HIGH); //ENGEGAT    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, LOW); 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, HIGH); //ENGEGAT 
delay(500);

digitalWrite(AR, HIGH); //ENGEGAT    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, LOW); 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, HIGH); //ENGEGAT 
delay(500);

digitalWrite(AR, HIGH); //ENGEGAT    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, LOW); 
  digitalWrite(BA, HIGH);//ENGEGAT   
  digitalWrite(BV, LOW); 
 delay(500);

digitalWrite(AR, HIGH);  //ENGEGAT   
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);

digitalWrite(AR, LOW);    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, HIGH);//ENGEGAT   
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);

digitalWrite(AR, LOW);    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, HIGH);//ENGEGAT   
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);

digitalWrite(AR, LOW);    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, HIGH); //ENGEGAT  
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);

digitalWrite(AR, LOW);    
  digitalWrite(AA, LOW);    
  digitalWrite(AV, HIGH); //ENGEGAT  
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);

digitalWrite(AR, HIGH);  //ENGEGAT   
  digitalWrite(AA, LOW);    
  digitalWrite(AV, LOW);  
  digitalWrite(BR, HIGH); //ENGEGAT 
  digitalWrite(BA, LOW);  
  digitalWrite(BV, LOW); 
delay(500);
}

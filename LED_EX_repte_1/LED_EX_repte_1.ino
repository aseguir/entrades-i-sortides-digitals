/**********************************************************************************
**                                                                               **
**                             LED EX 1                                          **
**                                                                               **
**   albert segui                                27/021/7                        **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ************************************************************
const int led0 = 12;
const int led1 = 11;
const int led2 = 10;
const int led3 = 9;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led0, HIGH);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);  
  digitalWrite(led3, HIGH);  

 delay(500);
 digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);  
  digitalWrite(led3, LOW);  
delay(500);

}

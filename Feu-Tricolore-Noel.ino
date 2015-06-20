/*
  Feu tricolore pour Noel
 */

int ledR = 11;           // the pin that the LED is attached to
int ledJ = 10;           // the pin that the LED is attached to
int ledV = 9;           // the pin that the LED is attached to
int i = 0;

// the setup routine runs once when you press reset:
void setup()  {
  pinMode(ledR, OUTPUT);
  pinMode(ledJ, OUTPUT);
  pinMode(ledV, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  analogWrite(ledR, 0);   
  analogWrite(ledJ, 0);
  
  
  i = 0;      
  while ( i < 255) {
    analogWrite(ledV, i);
    i = i + 25;
    delay(5);
  }       
  while ( i > 0) {
        analogWrite(ledV, i);
        i = i - 25;
        delay(5);
    }  
  delay(10);
    
    
  analogWrite(ledV, 0); 
  
  //---------------------------------------------//
  
  analogWrite(ledR, 0); 
  i = 0;        
  while ( i < 255) {
        analogWrite(ledJ, i);
        delay(5);
        i = i + 25;
    } 
    while ( i > 0) {
          analogWrite(ledJ, i);
          i = i - 25;
          delay(5); 
    }   
  delay(10);
  analogWrite(ledR, 0);
  analogWrite(ledV, 0);  
  
  //---------------------------------------------//
  
  analogWrite(ledJ, 0);       
  i = 0;   
  while ( i < 255) {
        analogWrite(ledR, i);
        delay(5);
        i = i + 25;
    }   
    while ( i > 0) {
          analogWrite(ledR, i);
          i = i - 25;
          delay(5); 
    } 
  delay(10);
  analogWrite(ledR, 0);  
  analogWrite(ledJ, 0);    
  analogWrite(ledV, 0);  
  
  //---------------------------------------------//
  
}

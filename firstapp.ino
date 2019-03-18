
int led = D7; //initialize led2 to D7 pin 


void setup() //setup function
{
   
    pinMode(led, OUTPUT); //modify led2 to give output light (on/off)

}

void loop() //loop function
{
    
    //for light on (.) delays for 100 milliseconds
    //for light off also delays for 100 milliseconds
    //for light on but (_) delays for 1000 milliseconds
   
    
    //V(..._)
   
    digitalWrite(led, HIGH);
    delay(100);
    
   
    digitalWrite(led, LOW);
    delay(100);
   
    
    
   
    digitalWrite(led, HIGH);
    delay(100);
    
   
    digitalWrite(led, LOW);
    delay(100);
   
    
    
   
    digitalWrite(led, HIGH);
    delay(100);
    
   
    digitalWrite(led, LOW);
    delay(100);

    
    
   
    digitalWrite(led, HIGH);
    delay(1000);
    
   
    digitalWrite(led, LOW);
    delay(100);
   
    
    //I(..)
   
    digitalWrite(led, HIGH);
    delay(100);
    
   
    digitalWrite(led, LOW);
    delay(100);
    
    digitalWrite(led, HIGH);
    delay(100);
    
    
    digitalWrite(led, LOW);
    delay(100);
    
    
    //N(_.)
     
    digitalWrite(led, HIGH);
    delay(1000);
    
   
    digitalWrite(led, LOW);
    delay(100);
    
    
    digitalWrite(led, HIGH);
    delay(100);
    
   
    digitalWrite(led, LOW);
    delay(100);
    
    //U(.._)
   
    digitalWrite(led, HIGH);
    delay(100);
    
    
    digitalWrite(led, LOW);
    delay(100);
    
  
    digitalWrite(led, HIGH);
    delay(100);
    
  
    digitalWrite(led, LOW);
    delay(100);
    
    
    digitalWrite(led, HIGH);
    delay(1000);
    
  
    digitalWrite(led, LOW);
    delay(100);
    
    //T(_)
   
    digitalWrite(led, HIGH);
    delay(1000);
    
    
    digitalWrite(led, LOW);
    delay(2000);  //but for the last light off delays for 2000 millisecons because it is the gab between ending point and starting point 
    
    
    

}
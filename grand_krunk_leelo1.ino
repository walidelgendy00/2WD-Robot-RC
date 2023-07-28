int EN1 = 3;
int EN2 = 5;
int in1 = 8;
int in2 = 9;
int in3 = 10; 
int in4 = 11;




void setup()
{
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in3,OUTPUT);
  
Serial.begin(9600);
}



void loop()
{
  if(Serial.available())
  {
    char direction = Serial.read();
    
    switch(direction)
    {
      
      case 'f' :
      
      analogWrite(EN1,255);
      analogWrite(EN2,255);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
delay(1000);
     
 break;
      
      
        case 'b' :
      
      analogWrite(EN1,255);
      analogWrite(EN2,255);
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
delay(1000);
     
 break;
      
     case 'r' :
      
      analogWrite(EN1,0);
      analogWrite(EN2,255);
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
delay(1000);
     
 break;   
      
     case 'l' :
      
      analogWrite(EN1,255);
      analogWrite(EN2,0);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
delay(1000);
     
 break;   
      
        case 's' :
      
      analogWrite(EN1,255);
      analogWrite(EN2,255);
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
delay(1000);
     
 break;
      
    }
  }
}
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
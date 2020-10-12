const int trigPin = 10;
const int echoPin = 9;
const int ledPin1= 2;
const int ledPin2= 3;
const int ledPin3= 4;
const int ledPin4= 5;
const int ledPin5= 6;
const int ledPin6= 7;
const int ldrPin= A0;
int ldrS=0;


void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  pinMode(ldrPin, INPUT);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  
  Serial.begin(9600);
  
}
void loop()
{
  int duration, distance,ldrS;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  ldrS=analogRead(ldrPin);
  
    if(ldrS>=500)
    {  
      
     Serial.print("distance=");
     Serial.println(distance);
        if(distance<=6 && distance>=4)
        {
          digitalWrite(ledPin1,HIGH);
          digitalWrite(ledPin2, HIGH);
          delay(1000);
          digitalWrite(ledPin1,LOW);
          digitalWrite(ledPin2, LOW);
      }
      
      
      else if(distance <=9 && distance >=7)
        {
            digitalWrite(ledPin2,HIGH);
            digitalWrite(ledPin3, HIGH);
            delay(1000);
            digitalWrite(ledPin2,LOW);
            digitalWrite(ledPin3, LOW);
        }
     
      else if(distance <=12&& distance >10)
        {
          digitalWrite(ledPin3,HIGH);
          digitalWrite(ledPin4, HIGH);
          delay(1000);
          digitalWrite(ledPin3,LOW);
          digitalWrite(ledPin4, LOW);
      }
    
      else if(distance <=15 && distance >=13)
        {
          digitalWrite(ledPin4,HIGH);
          digitalWrite(ledPin5, HIGH);
          delay(1000);
          digitalWrite(ledPin4,LOW);
          digitalWrite(ledPin5, LOW);
      }
    
      else if(distance >=16 && distance<=20)
      {
          digitalWrite(ledPin5,HIGH);
          digitalWrite(ledPin6, HIGH);
          delay(1000);
          digitalWrite(ledPin5,LOW);
          digitalWrite(ledPin6, LOW);
        }

      else
      {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
        digitalWrite(ledPin6, LOW);
       }
    }
      
   

}

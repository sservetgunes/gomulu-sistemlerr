int trigPin=9;
int echoPin=10;
int kirmizi=2,yesil=3,sari=4,mavi=5,beyaz=6;
long sure,uzaklik;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(beyaz,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);  
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  uzaklik=(sure/2)/29.1;
  
  Serial.print("Mesafe:");
  Serial.println(uzaklik);
  Serial.println(" CM");
  
  if(uzaklik<=50)
  {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);

  }
   else if(uzaklik<=100)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,HIGH);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);

  }
   else if(uzaklik<=150)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(sari,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);

  }
   else if(uzaklik<=200)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(beyaz,LOW);

  }
   else if(uzaklik<=250)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,HIGH);

  }
   else
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(beyaz,LOW);

  }
  delay(50);
}
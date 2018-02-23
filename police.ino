void setup (){
  
  pinMode(13, OUTPUT); //piros
  pinMode(12, OUTPUT); //kék
  
}

void loop () {

digitalWrite(13, HIGH);   
  digitalWrite(12, LOW);
  delay(200);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(150);
  
}


//int LED=9;
int sensor=7;
int buzzer=9;
void setup() {
  // put your setup code here, to run once:

//pinMode(LED,OUTPUT);
Serial.begin(9600);
pinMode(sensor,INPUT);
Serial.println("Setup Completed!!");
pinMode(buzzer,OUTPUT);
Serial.println("Setup Completed!!");

}

void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(sensor)==0){
  Serial.println("Active");
  //digitalWrite(LED,HIGH);
  //tone(buzzer,1000);
  //delay(1000);
 int t=2; 
  while(t>0){
    if(digitalRead(sensor)==0){
      t--;
      //Serial.println("Active");
      Serial.println(t);
    }
    else{
      break;
    }
    delay(1000);
  }
  if(t==0){
    tone(buzzer,1000);
  }
  delay(100);
}
noTone(buzzer);
Serial.println("Not Active");
}

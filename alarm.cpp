int ldrPin=A0;
int ldrread;
int dl=500;
int orange=8;
int green=5;
int buzzer=2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ldrPin, INPUT);
pinMode(green, OUTPUT);
pinMode(orange, OUTPUT);
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

ldrread=analogRead(ldrPin);
Serial.println(ldrread);
delay(dl);

if(ldrread>=700){
  digitalWrite(orange, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(buzzer, HIGH);
  
}

else{
  digitalWrite(green, HIGH);
  digitalWrite(orange, LOW);
  digitalWrite(buzzer, LOW);
}

}

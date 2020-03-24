int counter = 0;
int pushButton = A0;
int light = 12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(light, OUTPUT);
  pinMode(pushButton, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(pushButton);
  delay(100);
  
  if (buttonState == HIGH)
  {
    counter++;
    delay(100);
  }
  Serial.println(counter);

  if(counter==4)
  {
    digitalWrite(light,HIGH);
  }
  if (counter==5)
  {
    digitalWrite(light,LOW);
    counter=1;
  }

}

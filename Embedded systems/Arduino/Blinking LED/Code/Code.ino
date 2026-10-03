const int LED1_PIN = 9;
const int LED2_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1_PIN,OUTPUT);
  pinMode (LED2_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN,LOW);
  delay(1000);

  digitalWrite(LED2_PIN,HIGH);
  digitalWrite(LED1_PIN,LOW);
  delay(1000);
}

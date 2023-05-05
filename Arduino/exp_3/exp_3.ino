int sensor_value,digital_value;
void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);
}
void loop() {
  sensor_value= analogRead(0);
  digital_value=digitalRead(2);
  if(sensor_value>100)
    digitalWrite(13,HIGH);
  else
    digitalWrite(13,LOW);
  Serial.println(sensor_value);
  Serial.println(digital_value);
  // delay(2000);
}
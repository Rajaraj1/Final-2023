#include<dht.h>
dht DHT;

void setup() {
 Serial.begin(9600);
}

void loop() {
  int chk= DHT.read11(8);
  Serial.print("Temp");
  Serial.print(DHT.temperature);
  Serial.print("humidity");
  Serial.print(DHT.humidity);

 
}


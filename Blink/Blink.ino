#include <DHT.h>
#define DHTPIN 2 // Analog Pin sensor is connected to

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
 
void setup(){
 
  Serial.begin(9600);
  //delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  //delay(1000);//Wait before accessing Sensor
  dht.begin();
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
   // dht.read11(dht_apin);
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    Serial.print("Current humidity = ");
    Serial.print(h);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.println("C  ");
    delay(2000);//Wait 5 seconds before accessing sensor again.
}// end loop(

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int k=1;
int ki=1;


void loop() {
  
  sensorValue = 3*analogRead(analogInPin);            


/*if (sensorValue>128) {  
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);      
}

*/
if (sensorValue%2) digitalWrite(2,HIGH);
else digitalWrite(2,LOW);
sensorValue=sensorValue/2;

if (sensorValue%2) digitalWrite(3,HIGH);
else digitalWrite(3,LOW);
sensorValue=sensorValue/2;

if (sensorValue%2) digitalWrite(4,HIGH);
else digitalWrite(4,LOW);
sensorValue=sensorValue/2;


if (sensorValue%2) digitalWrite(5,HIGH);
else digitalWrite(5,LOW);
sensorValue=sensorValue/2;

if (sensorValue%2) digitalWrite(6,HIGH);
else digitalWrite(6,LOW);
sensorValue=sensorValue/2;

if (sensorValue%2) digitalWrite(7,HIGH);
else digitalWrite(7,LOW);
sensorValue=sensorValue/2;

if (sensorValue%2) digitalWrite(8,HIGH);
else digitalWrite(8,LOW);
sensorValue=sensorValue/2;

/*  Serial.print("sensor = " );                       

  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(sensorValue);   
*/

}

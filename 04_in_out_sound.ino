const int analogInPin = A0;  // Analog input pin that the guitar is attached to


int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int sensorPrev = 0;
int sensorPrev2 = 0;
int buttonState = 0;
int k=1;
int ki=1;
void setup() {

pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(10, INPUT);
}

void loop() {
  

sensorValue = analogRead(analogInPin);      

    
sensorPrev2=sensorPrev;
sensorPrev=sensorValue;
buttonState = digitalRead(10);
if (buttonState) sensorValue=(1+0.001*random(1,100))*(sensorValue+0.66*sensorPrev+0.33*sensorPrev2)/2;
else sensorValue=(sensorValue+sensorPrev+sensorPrev2)/3;
//delay (3);
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

}

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the guitar is attached to


int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int sensorPrev = 0;
int sensorPrev2 = 0;
int sensorPrev3 = 0;
int sensorPrev4 = 0;
int sensorPrev5 = 0;
int sensorPrev6 = 0;
int sensorPrev7 = 0;
int sensorPrev8 = 0;
int sensorPrev9 = 0;
int sensorPrev10 = 0;


int buttonState = 0;

int k=1;
int ki=1;
void setup() {
  // initialize serial communications at 9600 bps:
// Serial.begin(9600);

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
 
 
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            

  // map it to the range of the analog out:
  //outputValue = map(sensorValue, 0, 1023, 0, 128);

sensorPrev2=sensorPrev;
sensorPrev=sensorValue;
buttonState = digitalRead(10);

// if (buttonState) sensorValue=(1+0.001*random(-50,50)*sensorValue/2;
/* if (buttonState) {
    k=2;
    for (i=0;i<100;i++) {sensorValue+=sensorValuePrev[i]/k;k*=2;}
    sensorValue=sensorValue/2;
}
*/

if (buttonState) sensorValue=(sensorValue+0.66*sensorPrev5+0.33*sensorPrev6+0.17*sensorPrev7+0.1*sensorPrev8+0.05*sensorPrev9)/2;
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

//if (outputValue<5)k=0;
  // change the analog out value:
  //analogWrite(analogOutPin, outputValue);           
//analogWrite(analogOutPin,sensorValue);
  // print the results to the serial monitor:
/*  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(sensorValue);   
*/
  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
 // delay(2);                     
}

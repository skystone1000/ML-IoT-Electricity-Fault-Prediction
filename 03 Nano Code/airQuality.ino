
int sensorValue;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

void setup(){ 
Serial.begin(9600);                            // sets the serial port to 9600
 }
void loop(){sensorValue = analogRead(A0);       // read analog input pin a3
Serial.print("AirQua=");
Serial.print(sensorValue, DEC);               // prints the value read
Serial.println(" PPM");

delay(10000);                                   // wait 100ms for next reading
}

// C++ code
//
int LED = A0;
int SENSOR = 7;
int data = 0;

void setup()
{
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  data = digitalRead(SENSOR);
  
  if (data == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
  	digitalWrite(LED, LOW);
  }
  
  Serial.print("Output: ");
  Serial.println(data);	
  delay(100);
}
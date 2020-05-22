#include <Servo.h>
#include <AudioFrequencyMeter.h>

AudioFrequencyMeter meter;
Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
void setup() 
{
  Serial.begin(115200);
  Serial.println("started");
  myservo.attach(3);  // attaches the servo on pin 3 to the servo object
  meter.setBandwidth(70.00, 400);    // Ignore frequency out of this range
  meter.begin(A0, 45000);             // Intialize A0 at sample rate of 45kHz
}
void loop() 
{
  // put your main code here, to run repeatedly:
  float frequency = meter.getFrequency();
  if (frequency > 0)
  {
    Serial.print(frequency);
    Serial.println(" Hz");
    
  if (frequency <=400 && frequency >300)
  {
    myservo.writeMicroseconds(2499);
    myservo.write(-180);
  }
  else 
  if (frequency <=200 && frequency >100)
  {
      
      myservo.writeMicroseconds(1499);
      myservo.write(180);
  }
  else
    if (frequency <=100 && frequency >70)
  {
      myservo.writeMicroseconds(1499);
      myservo.write(180);
   
  }
  else
    if (frequency <=300 && frequency >200)
    {
      Serial.println("Frequency Between 200-300 Hz");
      delay(10);            // waits 10 seconds
    }
  }
  // if (frequency <=140 && frequency >110)
   // {
    //   myservo.write(500); 
    //   delay(10);            // waits 3 seconds
    //}
  //if (frequency <=110 && frequency >80)
   //{
   //    myservo.write(800); 
    //   delay(10);            // waits 3 seconds
   //}
}

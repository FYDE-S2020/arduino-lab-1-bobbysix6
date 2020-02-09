#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void timedBlink(int interval)
  {
    
    digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(interval);                       // wait for an interval
    digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
    delay(interval);              // wait for an interval
    }                     


//void dimmer(int freq, int duty) {
//  int period, onTime, offTime;
//  period = 1000/freq;
//  onTime = period * duty / 100;
//  offTime = period - onTime;
//  digitalWrite(LED_BUILTIN, HIGH);
//  delay(onTime);
//  digitalWrite(LED_BUILTIN, LOW);
//  delay(offTime);
//}

//freq = 100;
//for (int i = 0; i <= 10; i++)
//{
//  dimmer(freq, i * 10);
//}
//
//for (int j = 10; j >= 0; j--)
//{
//  dimmer(freq, j * 10);
//}

void loop() {
  timedBlink(250);
  timedBlink(500);
  timedBlink(1000);
  
}

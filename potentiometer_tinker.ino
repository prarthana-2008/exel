
int LED =10;
int p_led=0;
int p=A4;
void setup(){
pinMode(LED, OUTPUT);
pinMode(p, INPUT);
Serial.begin(9600);
 }
  void loop(){
 p_led = map(analogRead(A4), 1,1024, 1, 240);
    Serial.print(p_led);
    Serial.println(p_led);
    analogWrite(LED,p_led);
  }
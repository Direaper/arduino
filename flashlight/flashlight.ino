 #define LED_PIN 6

void setup() 
{
 
  pinMode(LED_PIN, OUTPUT);

}
 
void loop()
{ 
byte light; 
    for (byte i = 0; i < 255; i++) { 
    light++;
    analogWrite(LED_PIN, light);
    delay(10);
    }  
    
    for (byte i = 255; i>0; i--){
    light--;
    analogWrite(LED_PIN, light);
    delay(10); 
 } 
}
 
 
 

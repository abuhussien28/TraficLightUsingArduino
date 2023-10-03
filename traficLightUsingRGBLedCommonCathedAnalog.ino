/*
Name      : Project trafic light using RGB led common Cathed Anglo   

progrmmer : Ali Abu Hussien

Date      :3/10/2023
Edited by :
*/
#define LED_RED 11 
#define LED_GREEN 10 
#define LED_BULE 9 
void setup() {
  // put your setup code here, to run once:
   pinMode(LED_RED,OUTPUT);//RED
   pinMode(LED_GREEN,OUTPUT);//GREEN
   pinMode(LED_BULE,OUTPUT);//BULE
}

void loop() {
  // put your main code here, to run repeatedly:
  // code for egypt flag
  // RED
  analogWrite(LED_RED,255);//RED
  analogWrite(LED_GREEN,0);//GREEN
  analogWrite(LED_BULE,0);//BULE
  delay(1000);
    // white
  analogWrite(LED_RED,255);//RED
  analogWrite(LED_GREEN,255);//GREEN
  analogWrite(LED_BULE,255);//BULE
  delay(1000);
    // Black
  analogWrite(LED_RED,51);//RED
  analogWrite(LED_GREEN,51);//GREEN
  analogWrite(LED_BULE,0);//BULE
  delay(1000);

}


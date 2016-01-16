
int BUZZER = 13; //We need a digital pin
int i = 0;
int tonos [] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494}; //Do , re mi, fa....
void setup(){
  pinMode(BUZZER, OUTPUT);// Pin as output
}

void loop(){
   for(i=0; i<12; i++){ // we playn all tones
      tone(BUZZER, tonos[i]);//Play tone i
      delay(500);
  }
}


int LedPinA = 5;

int LedPinB = 6;

int ButtonPinA = 7;

int ButtonPinB = 4;

int buttonStateA = 0; 

int buttonStateB = 0;

int brightness   = 0;

 

void setup() 

{

    pinMode(LedPinA, OUTPUT); 

    pinMode(LedPinB, OUTPUT);  

    pinMode(ButtonPinA, INPUT); 

    pinMode(ButtonPinB, INPUT);     

}

 

void loop() 

{

  buttonStateA = digitalRead(ButtonPinA);

  if (buttonStateA == HIGH && brightness != 255)

  { 

   brightness ++;

  } else {
    
     brightness =0;
    
    }

      analogWrite(LedPinA, brightness);  //  A will turn off gradually 

      analogWrite(LedPinB, 255 - brightness);  // B will turn on gradually 

      delay(25);

}

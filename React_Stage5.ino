/*
  CTC GO! CORE MODULE 
  PROJECT 1 - REACT

  This sketch is written to accompany Stage 3 in REACT  of the CTC GO! core module
*/

int blueLED_P1 = 10;
int redLED = 11;
int greenLED = 12;
int blueLED_P2 = 13;

int button_P1 = 2;
int button_P2 = 3;

int game = 0;

void setup() {

  pinMode (blueLED_P1, OUTPUT);
  pinMode (blueLED_P2, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (redLED, OUTPUT);

  pinMode (button_P1, INPUT);
  pinMode (button_P2, INPUT);
}

void loop() {
 
   if (game == 0)
   {
    digitalWrite(blueLED_P1, HIGH);
    digitalWrite(blueLED_P2, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, HIGH);
    delay(250);
    digitalWrite(blueLED_P1, LOW);
    digitalWrite(blueLED_P2, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
    delay(250);
   
    if (digitalRead(button_P1)== HIGH || digitalRead(button_P2) == HIGH )
     {
      game += 1;
      digitalWrite(blueLED_P1, HIGH);
      digitalWrite(blueLED_P2, HIGH);  
      digitalWrite(greenLED, HIGH);
      digitalWrite(redLED, HIGH);
      delay(250);    
      digitalWrite(blueLED_P1, LOW);
      digitalWrite(blueLED_P2, LOW);
      digitalWrite(greenLED, LOW);
      digitalWrite(redLED, LOW);
      delay(250);
      }
   } 

  if (game == 1)
  {
     if (digitalRead(button_P1) == HIGH) 
     {
         digitalWrite(blueLED_P1, HIGH);
         delay(100);
         digitalWrite(blueLED_P1, LOW);
         delay(100);
         game = 0;
     }
    
    if (digitalRead(button_P2) == HIGH)
    {
       digitalWrite(blueLED_P2, HIGH);
       delay(100);
       digitalWrite(blueLED_P2, LOW);
       delay(100);
       game = 0;
    }
}

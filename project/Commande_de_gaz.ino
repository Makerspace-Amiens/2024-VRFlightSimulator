#include <Joystick.h>

int minX, maxX, minY, maxY;
int Variation;
Joystick_ Joystick;

void setup() {
  Joystick.begin();

  Joystick.setXAxisRange(0, 124);
  Joystick.setYAxisRange(0, 124);

  int initX = analogRead(A1);
  int initY = analogRead(A0);

  Variation = 176; // Origine à 175

  minX = initX + 4; 
  maxX = initX + 172;
  minY = initY - 4;
  maxY = initY - 180;

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
}

void loop() {
  int valeurAnalogiqueX = analogRead(A1);
  int valeurAnalogiqueY = analogRead(A0);

  int AxeX = map(valeurAnalogiqueX, minX, maxX, 0, 1024);
  int AxeY = map(valeurAnalogiqueY, minY, maxY, 0, 1024);

  AxeX = constrain(AxeX, 0, 1024);
  AxeY = constrain(AxeY, 0, 1024);

  Joystick.setRxAxis(AxeX);
  Joystick.setRyAxis(AxeY);


  int mini_joystick_AX = analogRead(A2);
  int mini_joystick_AY = analogRead(A3);

  int mini_joystick_X = map(mini_joystick_AX, 1024, 0, 124, 0);
  int mini_joystick_Y = map(mini_joystick_AY, 1024, 0, 0, 124);

  mini_joystick_X = constrain(mini_joystick_X, 0, 124);
  mini_joystick_Y = constrain(mini_joystick_Y, 0, 124);

  Joystick.setXAxis(mini_joystick_X);
  Joystick.setYAxis(mini_joystick_Y);
  

  Joystick.setButton(1, (digitalRead(2) == LOW));
  Joystick.setButton(2, (digitalRead(3) == LOW));
  Joystick.setButton(3, (digitalRead(4) == LOW));
  Joystick.setButton(4, (digitalRead(5) == LOW));
  Joystick.setButton(5, (digitalRead(6) == LOW));
  Joystick.setButton(6, (digitalRead(7) == LOW));
  Joystick.setButton(7, (digitalRead(8) == LOW));
  Joystick.setButton(8, (digitalRead(9) == LOW));
  Joystick.setButton(9, (digitalRead(10) == LOW));
  Joystick.setButton(10, (digitalRead(16) == LOW));
  
  Joystick.setButton(11, (digitalRead(0) == LOW));
  Joystick.setButton(12, (digitalRead(1) == LOW));
  Joystick.setButton(13, (digitalRead(14) == LOW));
  Joystick.setButton(14, (digitalRead(15) == LOW));

  delay(20);
}
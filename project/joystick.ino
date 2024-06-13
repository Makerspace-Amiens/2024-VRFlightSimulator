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

  Variation = 62; // Origine à 65

  minX = initX - Variation; 
  maxX = initX + Variation;
  minY = initY - Variation;
  maxY = initY + Variation;

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
}

void loop() {
  int valeurAnalogiqueX = analogRead(A1);
  int valeurAnalogiqueY = analogRead(A0);

  int AxeX = map(valeurAnalogiqueX, minX, maxX, 124, 0);
  int AxeY = map(valeurAnalogiqueY, minY, maxY, 124, 0);

  AxeX = constrain(AxeX, 0, 124);
  AxeY = constrain(AxeY, 0, 124);

  Joystick.setXAxis(AxeX);
  Joystick.setYAxis(AxeY);

  int mini_joystick_AX = analogRead(A2);
  int mini_joystick_AY = analogRead(A3);

  int mini_joystick_X = map(mini_joystick_AX, 1024, 0, 0, 1024);

  Joystick.setRxAxis(mini_joystick_X);
  Joystick.setRyAxis(mini_joystick_AY);

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

  delay(20);
}
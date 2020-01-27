/**
 * In input (dai pushbuttons)
 * pin 1 - forward
 * pin 2 - backward
 * pin 3 - left
 * pin 4 - right
 * pin 5 - fire
 * 
 * In output (da Arduino al connettore DB9)
 * pin 8 - forward
 * pin 9 - backward
 * pin 10 - left
 * pin 11 - right
 * pin 12 - fire
 */

const int forwardIn = 1;
const int backwardIn = 2;
const int leftIn = 3;
const int rightIn = 4;
const int fireIn = 5;

const int forwardOut = 8;
const int backwardOut = 9;
const int leftOut = 10;
const int rightOut = 11;
const int fireOut = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(forwardIn, INPUT_PULLUP);
  pinMode(backwardIn, INPUT_PULLUP);
  pinMode(leftIn, INPUT_PULLUP);
  pinMode(rightIn, INPUT_PULLUP);
  pinMode(fireIn, INPUT_PULLUP);

  pinMode(forwardOut, OUTPUT);
  pinMode(backwardOut, OUTPUT);
  pinMode(leftOut, OUTPUT);
  pinMode(rightOut, OUTPUT);
  pinMode(fireOut, OUTPUT);

  digitalWrite(forwardOut, HIGH);
  digitalWrite(backwardOut, HIGH);
  digitalWrite(leftOut, HIGH);
  digitalWrite(rightOut, HIGH);
  digitalWrite(fireOut, HIGH);
}

/*
 * Nell'interfaccia JOYSTICK di Amiga una funzione è attivata da un segnale basso.
 */
void loop() {
  // Forward
  digitalWrite(forwardOut, digitalRead(forwardIn));

  // Backward
  digitalWrite(backwardOut, digitalRead(backwardIn));

  // Left
  digitalWrite(leftOut, digitalRead(leftIn));

  // Right
  digitalWrite(rightOut, digitalRead(rightIn));

  // Fire
  digitalWrite(fireOut, digitalRead(fireIn));
}

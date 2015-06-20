/*
  Feu tricolore pour Noel
 */

int ledP[3] = {11, 10, 9};
int number;
int intensity;

// the setup routine runs once when you press reset:
void setup()  {
  pinMode(ledP[0], OUTPUT);
  pinMode(ledP[1], OUTPUT);
  pinMode(ledP[2], OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  number = random(3);
  intensity = random(256);
  analogWrite(ledP[number], intensity);
  delay(30);
}

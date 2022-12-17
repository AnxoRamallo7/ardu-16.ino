// C++ code
//
int A = 0;

int B = 0;

int C = 0;

int unnamed = 0;

int i = 0;

int j = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  A += digitalRead(10);
  B += digitalRead(9);
  C += digitalRead(8);

  if (((!(digitalRead(10) == LOW)) && digitalRead(9) == HIGH) && (!(digitalRead(8) == LOW))) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    if (digitalRead(10) == HIGH && (digitalRead(9) == HIGH && (!(digitalRead(8) == HIGH)))) {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
    } else {
      if (digitalRead(10) == HIGH && (digitalRead(9) == HIGH && digitalRead(8) == HIGH)) {
        digitalWrite(LED_BUILTIN, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        delay(1000); // Wait for 1000 millisecond(s)
        digitalWrite(LED_BUILTIN, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(12, HIGH);
        delay(1000); // Wait for 1000 millisecond(s)
      } else {
        digitalWrite(LED_BUILTIN, LOW);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
      }
    }
  }
}

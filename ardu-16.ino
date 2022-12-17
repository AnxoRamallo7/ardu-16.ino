//RIEGO AUTOMATIZADO//
//En esta practica programamos un riego automatizado diseñado con portas loxicas con ur arduino,para esto poñemos como entadas algun dos pins do noso arduino//
//desta forma e usando as variables mate maticas somos capaces de crear unha funcion loxica funcional en arduino//
//o noso sistema regara cando (A=1,B=1,C=1),(A=1,B=1,C=0),(A=0,B=1,C=0)//

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
//Si non se cumple o if que seria o prtimer valor positivo da nosa funcion loxica,introducimos un segundo is no seu else desta forma se cumpliria o segundo valor positivo da funcion
  
    if (digitalRead(10) == HIGH && (digitalRead(9) == HIGH && (!(digitalRead(8) == HIGH)))) {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
    
      //nesta etapa o mesmo ao non cumplirse nin o primer nin o segundo valor positivo engadimos no else un tercer if facendo asi,que se cumpla o tercr valor

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
        //ahora co ultimo else facemos que si non se cumolen ningunha das 3 variables os leds esten apagados
      }
    }
  }
}

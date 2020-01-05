#define LED_PIN 9

char letter;              //переменная куда передается параметр строки

class Morze              //класс Morze имеет пять методов
{
    static void point()  //Метод, который описывает поведение ТОЧКА
    {
      byte BrightLed = 255;
      analogWrite(LED_PIN, BrightLed);
      delay(250);
      analogWrite(LED_PIN, 0);
      delay(250);
    }

    static void dash() //Метод, который описывает поведение ТИРЕ
    {
      byte BrightLed = 255;
      analogWrite(LED_PIN, BrightLed);
      delay(750);
      analogWrite(LED_PIN, 0);
      delay(250);
    }

    static void delayfunc() //Метод, который описывает поведение ТИРЕ
    {
      delay(750);
    }

    static void parsing()
    {
      if (Serial.available()) {
        letter = (char)Serial.read(); // принять сообщения из ком порта в переменную letter посимвольно
      }
    }

  public: static void alphabethMorze()  //Здесь описан алгоритм работы алфавита Морзе
    {
      parsing();
      if (letter == 'A') {
        Serial.println(letter);
        point();
        dash();
        delayfunc();
        letter = "";
      }
      else if (letter == 'B') {
        Serial.println(letter);
        dash();
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }
      else if (letter == 'С') {
        Serial.println(letter);
        dash();
        point();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'D') {
        Serial.println(letter);
        dash();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'E') {
        Serial.println(letter);
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'F') {
        Serial.println(letter);
        point();
        point();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'G') {
        Serial.println(letter);
        dash();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'H') {
        Serial.println(letter);
        point();
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'I') {
        Serial.println(letter);
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'J') {
        Serial.println(letter);
        point();
        dash();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'K') {
        Serial.println(letter);
        dash();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'L') {
        Serial.println(letter);
        point();
        dash();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'M') {
        Serial.println(letter);
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'N') {
        Serial.println(letter);
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'O') {
        Serial.println(letter);
        dash();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'P') {
        Serial.println(letter);
        point();
        dash();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == 'Q') {
        Serial.println(letter);
        dash();
        dash();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'R') {
        Serial.println(letter);
        point();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      if (letter == 'S') {
        Serial.println(letter);
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }
      else if (letter == 'T') {
        Serial.println(letter);
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'U') {
        Serial.println(letter);
        point();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'V') {
        Serial.println(letter);
        point();
        point();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'W') {
        Serial.println(letter);
        point();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'X') {
        Serial.println(letter);
        dash();
        point();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'Y') {
        Serial.println(letter);
        dash();
        point();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == 'Z') {
        Serial.println(letter);
        dash();
        dash();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '1') {
        Serial.println(letter);
        point();
        dash();
        dash();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == '2') {
        Serial.println(letter);
        point();
        point();
        dash();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == '3') {
        Serial.println(letter);
        point();
        point();
        point();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == '4') {
        Serial.println(letter);
        point();
        point();
        point();
        point();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == '5') {
        Serial.println(letter);
        point();
        point();
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '6') {
        Serial.println(letter);
        dash();
        point();
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '7') {
        Serial.println(letter);
        dash();
        dash();
        point();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '8') {
        Serial.println(letter);
        dash();
        dash();
        dash();
        point();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '9') {
        Serial.println(letter);
        dash();
        dash();
        dash();
        dash();
        point();
        delayfunc();
        letter = "";
      }

      else if (letter == '0') {
        Serial.println(letter);
        dash();
        dash();
        dash();
        dash();
        dash();
        delayfunc();
        letter = "";
      }

      else if (letter == ' ') {
        Serial.println(letter);
        delay(1750);
        letter = "";
      } 
    }
};

void setup() {
  Serial.begin(9600);
  Serial.println("Hello in Morze-Code programm!");  
  Serial.println("Please, enter you message");  
}

void loop() {

  Morze::alphabethMorze();

}

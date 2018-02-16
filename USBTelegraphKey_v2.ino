/*
 * USB MorseCode Key Example
 * For Trinket by Riley Mann
 */
#include <ProTrinketKeyboard.h>

#define LED     13

#define BUZZER  12

#define MODE    11

#define KEY_DOT 10

#define DASH     9

#define regled   6

#define autled   5

#define indled   3

boolean active = false;
boolean spaced = false;
boolean dotauto = false;
boolean dashauto = false;
boolean endit = false;
int readstep = 0;
int dotspeed = 0;
int dashspeed = 0;
int timer = 0;
String code = "";

String a = ".-";
String b = "-...";
String c = "-.-.";
String d = "-..";
String e = ".";
String f = "..-.";
String g = "--.";
String h = "....";
String i = "..";
String j = ".---";
String k = "-.-";
String l = ".-..";
String m = "--";
String n = "-.";
String o = "---";
String p = ".--.";
String q = "--.-";
String r = ".-.";
String s = "...";
String t = "-";
String u = "..-";
String v = "...-";
String w = ".--";
String x = "-..-";
String y = "-.--";
String z = "--..";
String one = ".----";
String two = "..---";
String three = "...--";
String four = "....-";
String five = ".....";
String six = "-....";
String seven = "--...";
String eight = "---..";
String nine = "----.";
String zero = "-----";
String period = ".-.-.-";
String comma = "--..--";
String colon = "---...";
String semicolon = "-.-.-.";
String equal = "-...-";
String dollar = "...-..-";
String at = ".--.-.";
String question = "..--..";
String slash = "-..-.";
String leftparenthesis = "-.--.";
String rightparenthesis = "-.--.-";
String enter = ".-.-.";
String backspace = "........";
String endjob = "...-.-";


void setup() {
  //sets key/dot as input w/ internal pullup resistor
  pinMode(KEY_DOT, INPUT);
  digitalWrite(KEY_DOT, HIGH);
  
  //sets dash as input w/ internal pullup resistor
  pinMode(DASH, INPUT);
  digitalWrite(DASH, HIGH);
  
  //sets mode as input w/ internal pullup resistor
  pinMode(MODE, INPUT);
  digitalWrite(MODE, HIGH);
  
  //sets regled as output and low
  pinMode(regled, OUTPUT);
  digitalWrite(regled, LOW);

  //sets autled as output and low
  pinMode(autled, OUTPUT);
  digitalWrite(autled, LOW);

  //sets indled as output and low
  pinMode(indled, OUTPUT);
  digitalWrite(indled, LOW);

  //sets buzzer as output and low
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  //sets LED as output and low
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
  //initialize USB
  TrinketKeyboard.begin();
}

void loop() {
  TrinketKeyboard.poll();
  // the poll function must be called at least once every 10 ms
  // or cause a keystroke
  // if it is not, then the computer may think that the device
  // has stopped working, and give errors
  
  boolean state = digitalRead(KEY_DOT);
  boolean dashstate = digitalRead(DASH);
  boolean regular = digitalRead(MODE);

  if (regular) {
    digitalWrite(regled, HIGH);
    digitalWrite(autled, LOW);
  } else {
    digitalWrite(regled, LOW);
    digitalWrite(autled, HIGH );
  }
  
  if (active) {
    switch (readstep) {
      case 0:
      noTone(BUZZER);
      digitalWrite(indled, LOW);
      if (timer > 7*dashspeed) {
        if (!spaced) {
          TrinketKeyboard.typeChar(' ');
          spaced = true;
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.poll();
        }
      } else {
        timer++;
      }
      if (timer == dashspeed) {
        TrinketKeyboard.poll();
        if (code == (a)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('a');
        }
        else if (code == b) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('b');
        }
        else if (code == c) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('c');
        }
        else if (code == d) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('d');
        }
        else if (code == e) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('e');
        }
        else if (code == f) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('f');
        }
        else if (code == g) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('g');
        }
        else if (code == h) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('h');
        }
        else if (code == i) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('i');
        }
        else if (code == j) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('j');
        }
        else if (code == k) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('k');
        }
        else if (code == l) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('l');
        }
        else if (code == m) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('m');
        }
        else if (code == n) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('n');
        }
        else if (code == o) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('o');
        }
        else if (code == p) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('p');
        }
        else if (code == q) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('q');
        }
        else if (code == r) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('r');
        }
        else if (code == (s)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('s');
        }
        else if (code == (t)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('t');
        }
        else if (code == (u)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('u');
        }
        else if (code == (v)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('v');
        }
        else if (code == (w)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('w');
        }
        else if (code == (x)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('x');
        }
        else if (code == (y)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('y');
        }
        else if (code == (z)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('z');
        }
        else if (code == (one)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('1');
        }
        else if (code == (two)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('2');
        }
        else if (code == (three)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('3');
        }
        else if (code == (four)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('4');
        }
        else if (code == (five)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('5');
        }
        else if (code == (six)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('6');
        }
        else if (code == (seven)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('7');
        }
        else if (code == (eight)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('8');
        }
        else if (code == (nine)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('9');
        }
        else if (code == (zero)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('0');
        }
        else if (code == (period)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('.');
        }
        else if (code == (comma)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar(',');
        }
        else if (code == (colon)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar(':');
        }
        else if (code == (semicolon)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar(';');
        }
        else if (code == (equal)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('=');
        }
        else if (code == (dollar)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('$');
        }
        else if (code == (at)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('@');
        }
        else if (code == (question)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('?');
        }
        else if (code == (slash)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('/');
        }
        else if (code == (leftparenthesis)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar('(');
        }
        else if (code == (rightparenthesis)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar(')');
        }
        else if (code == (backspace)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.pressKey(0, KEYCODE_BACKSPACE);
          TrinketKeyboard.pressKey(0, 0);
          spaced = true;
        }
        else if (code == (enter)) {
          digitalWrite(LED, HIGH);
          delay(9);
          digitalWrite(LED, LOW);
          TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
          TrinketKeyboard.pressKey(0, 0);
          spaced = true;
        }
        else if (code == (endjob)) {
          active = false;
          readstep = 0;
          timer = 0;
        } else {
          spaced = true;
        }
        code = "";
      }
      if (!state) {
        readstep = 1;
        timer = 0;
        endit = false;
        dotauto = false;
        dashauto = false;
      }
      if (!regular && !dashstate) {
        readstep = 1;
        timer = 0;
        endit = false;
        dotauto = false;
        dashauto = false;
      }
      break;
      case 1:
      timer++;
      if (regular) {
        tone(BUZZER, 1800);
        digitalWrite(indled, HIGH);
        endit = true;
      } else {
        if (!state && !dashauto) {
          dotauto = true;
        } else if (!dashstate && !dotauto) {
          dashauto = true;
        }
        if (dotauto && !dashauto) {
          if (timer < dotspeed) {
            tone(BUZZER, 1800);
            digitalWrite(indled, HIGH);
          }
          if (timer == dotspeed) {
            noTone(BUZZER);
            digitalWrite(indled, LOW);
            code += '.';
            endit = true;
            dotauto = false;
          }
          if (timer > dashspeed) {
            timer = 0;
            endit = false;
          }
        } 
        if (dashauto && !dotauto) {
          if (timer < (dotspeed*3)) {
            tone(BUZZER, 1800);
            digitalWrite(indled, HIGH);
          }
          if (timer == (dotspeed*3)) {
            noTone(BUZZER);
            digitalWrite(indled, LOW);
            code += '-';
            endit = true;
            dashauto = false;
          }
          if (timer > (dotspeed*4)) {
            timer = 0;
            endit = false;
          }
        }
      }
      if (state && dashstate && endit) {
        spaced = false;
        if (regular) {
          if (timer >= dashspeed) {
            code += '-';
          } else if (timer < (float)dotspeed/3.0) {
            spaced = true;
          } else {
            code += '.';
          }
        }
        timer = 0;
        readstep = 0;
      }
      break;
    }
  } else {
    digitalWrite(LED, HIGH);
    
    switch (readstep) {
      case 0:
      noTone(BUZZER);
      timer = 0;
      if (!state) {
        readstep = 1;
      }
      break;
      case 1:
      timer++;
      tone(BUZZER, 1800);
      if (state) {
        readstep = 2;
      }
      break;
      case 2:
      noTone(BUZZER);
      dotspeed = timer;
      dashspeed = 2*dotspeed;
      digitalWrite(LED, LOW);
      code += '.';
      active = true;
      readstep = 0;
      timer = 0;
      spaced = false;
      break;
    }
  }
  delay(1);
}


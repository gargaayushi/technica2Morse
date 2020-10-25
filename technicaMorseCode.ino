#include <MorseCodeMachine.h>

void setup() {
  pinMode(10, OUTPUT);

}

void loop() {
  sendMorse("Technica 2020!", delayer, dot, dash);

}

void delayer()
{
  delay(200);
  }

void dot()
{
  digitalWrite(10, HIGH);
  delayer();
  digitalWrite(10, LOW);
}

void dash()
{
  digitalWrite(10, HIGH);
  delayer();
  delayer();
  delayer();
  digitalWrite(10, LOW);
  }

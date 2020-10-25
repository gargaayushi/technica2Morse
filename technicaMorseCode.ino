#include <MorseCodeMachine.h>

void setup() {
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);


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
  digitalWrite(6, HIGH);
  delayer();
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
}

void dash()
{
  digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
  delayer();
  delayer();
  delayer();
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  }

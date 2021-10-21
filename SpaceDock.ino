#include <jled.h>
auto ledWelding = JLed(3).Candle(5,170).Forever();
auto led = JLed(2).Blink(200, 800).Forever();
auto led2 = JLed(10).Blink(200, 800).DelayBefore(500).Forever();
auto fade = JLed(11).Breathe(2000).DelayAfter(1000).Forever();


void setup() {
}

void loop() {
  ledWelding.Update();
  led.Update();
  fade.Update();
  led2.Update();
}

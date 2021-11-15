#include <FastLED.h>
#define LED_PIN     8
#define NUM_LEDS    8
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  for (int i = 0; i <= 8; i++) {
    leds[i] = CRGB ( 255, 0, 144);
    FastLED.show();
    delay(40);
  }
  for (int i = 8; i >= 0; i--) {
    leds[i] = CRGB (  255, 165, 0);
    FastLED.show();
    delay(40);
  }
}

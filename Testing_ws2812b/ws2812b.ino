#include <FastLED.h>
#define LED_PIN     8
#define NUM_LEDS    8
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}
void loop() {
  
  leds[0] = CRGB(255, 165, 0);
  FastLED.show();
  delay(500);  
  
  leds[1] = CRGB(0, 0 , 128);
  FastLED.show();
  delay(500);
  
  leds[2] = CRGB(254, 254, 51);
  FastLED.show();
  delay(500);
  
  leds[3] = CRGB(254, 23, 12);
  FastLED.show();
  delay(500);
  
  leds[4] = CRGB(12, 254, 26);
  FastLED.show();
  delay(500);
  
  leds[5] = CRGB(254, 79, 239);
  FastLED.show();
  delay(500);
  
  leds[6] = CRGB(1, 245, 244);
  FastLED.show();
  delay(500);
  
  leds[7] = CRGB(50, 255, 20+);
  FastLED.show();
  delay(500);
  
  leds[8] = CRGB(50, 255, 20);
  FastLED.show();
  delay(1000);


  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);  
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[6] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[7] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[8] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);

  leds[0] = CRGB(100, 0, 0);
  FastLED.show();
  delay(500);  
  leds[1] = CRGB(0, 200, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 300);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(400, 0, 0);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(0, 500, 0);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(0, 0, 600);
  FastLED.show();
  delay(500);
  leds[6] = CRGB(700, 0, 0);
  FastLED.show();
  delay(500);
  leds[7] = CRGB(0, 800, 0);
  FastLED.show();
  delay(500);
  leds[8] = CRGB(0, 0 , 900);
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);  
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[6] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[7] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
  leds[8] = CRGB(0, 0, 0);
  FastLED.show();
  delay(500);
}

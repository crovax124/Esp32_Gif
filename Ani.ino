#include "walk.h"
#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
tft.init();
  tft.setRotation(1);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
}

void loop() {
for(int i=0;i<frames;i++)
{
  delay(40);
  tft.pushImage(60, 15,animation_width  , animation_height, walk[i]);
  }
}
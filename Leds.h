#pragma once
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class Leds
{
  private : 
    Adafruit_NeoPixel * RGB;
  public:
    Leds();
    ~Leds(void);
    void rouge();
    void vert();
    void bleu();
    void eteint();
    void changeCouleur(int led, int couleur);

};


#include "Leds.h"
#include "constantes.h"

Leds::Leds()
{
    RGB = new Adafruit_NeoPixel(4, PINCOULEUR, NEO_GRB + NEO_KHZ800);
    RGB->begin();
    RGB->show();
}

void Leds::rouge()
{
    RGB->setPixelColor(0, 0xFF0000);
    RGB->setPixelColor(1, 0xFF0000);
    RGB->setPixelColor(2, 0xFF0000);
    RGB->setPixelColor(3, 0xFF0000);
    RGB->show();
}
void Leds::vert()
{
    RGB->setPixelColor(0, 0x00FF00);
    RGB->setPixelColor(1, 0x00FF00);
    RGB->setPixelColor(2, 0x00FF00);
    RGB->setPixelColor(3, 0x00FF00);
    RGB->show();
}
void Leds::bleu()
{
    RGB->setPixelColor(0, 0x0000FF);
    RGB->setPixelColor(1, 0x0000FF);
    RGB->setPixelColor(2, 0x0000FF);
    RGB->setPixelColor(3, 0x0000FF);
    RGB->show();  
}
void Leds::eteint()
{
    RGB->setPixelColor(3, 0x000000);
    RGB->show();    
}

void Leds::changeCouleur(int led, int couleur)
{
   RGB->setPixelColor(led, couleur);
   RGB->show();  
}
Leds::~Leds(void)
{
  
}

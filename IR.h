/************************************************************/
/* Didier Petitjean le 31/10/2019/2019                      */
/* Utilisa les capteurs IR (PCF8574) l'alphabot         */
/*  BTS SN                                                  */
/************************************************************/
#pragma once
#include <Arduino.h>
#include <Wire.h>

class IR
{
  private : 
    void ecrire(byte data);
    byte lire();
  public:
    IR();
    bool obstacle();
    ~IR(void);


};


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

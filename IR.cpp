/************************************************************/
/* Didier Petitjean le 31/10/2019/2019                      */
/* Utilisa les capteurs IR (PCF8574) l'alphabot         */
/*  BTS SN                                                  */
/************************************************************/
#include "IR.h"
#include "constantes.h"
//#include <Arduino.h>

IR::IR()
{
    Wire.begin();
}
/***************************************************/
/* Retourne vrai si le capteur détecte un obstacle */
/* sinon faux                                      */
bool IR::obstacle()
{
  byte valeur;
  
  ecrire(0xC0 | lire());          //Met la broche à haut
  valeur = lire() | 0x3F;         //lit la broche
  if(valeur != 0xFF)  
    return true;
  else
    return false;
}


void IR::ecrire(byte data)
{
  Wire.beginTransmission(ADDRIR);
  Wire.write(data);
  Wire.endTransmission(); 
}

byte IR::lire()
{
  int data = -1;
  Wire.requestFrom(ADDRIR, 1);
  if(Wire.available()) {
    data = Wire.read();
  }
  return data;
}
IR::~IR(void)
{
  
}

/************************************************************/
/* Didier Petitjean le 31/10/2019/2019                      */
/* assure la communication en BT avec l'alphabot            */
/* Trame....                                                */
/*  BTS SN                                                  */
/************************************************************/
#include "Communication.h"
#include "constantes.h"
#include <Arduino.h>

Communication::Communication()
{
//    Serial.begin(115200);
}

char Communication::ordre()
{
    String recu = "";
    char retour = '0';
    
    while (Serial.available() > 0)  
    {
        recu = char(Serial.read());
        delay(2);
    }
	retour = recu[0];
    if((retour == '6')||(retour == '7'))
    {
        String entier = recu.substring(1);
        delta = entier.toInt();
    }
    return retour;
}
int Communication::getDelta()
{
  return delta;
}
Communication::~Communication(void)
{
    
}

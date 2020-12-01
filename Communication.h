/************************************************************/
/* Didier Petitjean le 31/10/2019/2019                      */
/* assure la communication en BT avec l'alphabot            */
/* Trame....                                                */
/*  BTS SN                                                  */
/************************************************************/
#pragma once
#include <Arduino.h>

class Communication
{
  private : 
    int delta;
  public:
    Communication();
    char ordre();
    int getDelta();
    ~Communication(void);

};

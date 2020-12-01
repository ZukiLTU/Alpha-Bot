/************************************************************/
/* Didier Petitjean le 28/10/2019/2019                      */
/* Commande des moteurs de l'alphabot                       */
/*  BTS SN                                                  */
/************************************************************/
#pragma once
#include <Arduino.h>

class Moteur
{
  private : 
    int vitesse;
  public:
    Moteur();
    ~Moteur(void);
    
    void avancer();
    void reculer();
    void tournerDroite();
    void tournerGauche();
    void stopper();
    void accelerer(int );
    void decelerer(int );
};

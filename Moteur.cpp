/************************************************************/
/* Didier Petitjean le 28/10/2019/2019                      */
/* Commande des moteurs de l'alphabot                       */
/*  BTS SN                                                  */
/************************************************************/
#include "Moteur.h"
#include "constantes.h"
#include <Arduino.h>

Moteur::Moteur()
{
  pinMode(PWMA,OUTPUT);                     
  pinMode(AIN2,OUTPUT);      
  pinMode(AIN1,OUTPUT);
  pinMode(PWMB,OUTPUT);       
  pinMode(AIN1,OUTPUT);     
  pinMode(AIN2,OUTPUT);

  vitesse = 150;
}

void Moteur::reculer()
{
  analogWrite(PWMA,vitesse);
  analogWrite(PWMB,vitesse);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW);  
  digitalWrite(BIN2,HIGH); 
}

void Moteur::avancer()
{
  analogWrite(PWMA,vitesse);
  analogWrite(PWMB,vitesse);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH); 
  digitalWrite(BIN2,LOW);  
}

void Moteur::tournerDroite()
{
  analogWrite(PWMA,50);
  analogWrite(PWMB,50);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH); 
  digitalWrite(BIN2,LOW);  
}

void Moteur::tournerGauche()
{
  analogWrite(PWMA,50);
  analogWrite(PWMB,50);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);  
}

void Moteur::stopper()
{
  analogWrite(PWMA,0);
  analogWrite(PWMB,0);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);  
}
void Moteur::accelerer(int augmentation)
{
  vitesse += augmentation;
  if(vitesse > VITESSEMAX)
    vitesse = VITESSEMAX;
}
void Moteur::decelerer(int reduction)
{
  vitesse -= reduction;
  if(vitesse < 0)
    vitesse = 0;  
}
Moteur::~Moteur(void)
{
  
}

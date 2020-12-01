#include "Moteur.h"
#include "Leds.h"
#include "Communication.h"
#include "IR.h"

Moteur traction;
//Leds leds;
Communication commande;
//IR capteurIR;

void setup() {
  Serial.begin(9600);
}
bool fois = true;
char ordre;

void loop() {
  ordre = commande.ordre();
//delay(1000);
//Serial.println("recu");  
  switch(ordre)
  {
      case 0 : break;
      case 1 : traction.avancer(); break;
      case 2 : traction.tournerDroite(); break;
      case 3 : traction.tournerGauche(); break;
      case 4 : traction.reculer(); break;
      case 5 : traction.stopper(); break;
      case 6 : traction.accelerer(commande.getDelta());
                 traction.avancer(); break;
      case 7 : traction.decelerer(commande.getDelta());
                 traction.reculer(); break;
      default : break;
  }
/*  if(capteurIR.obstacle())
      Serial.println("Obstacle présent");
  else
      Serial.println("Pas d'obstacle"); */
  
/*  // Test loupiotes
  leds.rouge();
Serial.println("Rouge");
  delay(1000);
  leds.vert();
Serial.println("Vert");
  delay(1000);
  leds.bleu();
Serial.println("Bleu");
  delay(1000);  
  leds.eteint();*/
}

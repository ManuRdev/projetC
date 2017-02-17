#include <stdlib.h>
#include <stdio.h>
#include "annonces.h"

int main(){

// ICi mettre le compteur, attention si fichier d'entrée, le charger sur le dernier ID

struct Annonce

{
    unsigned int id;                    //Numéro d'annonce
    unsigned int type = 0;              //Code de type (0 = appart, 1 = maison)
    unsigned int pieces= 1;             //Nombre de pièces       
    unsigned float surface = 9;             
    unsigned float loyer = 0;
    unsigned float charges = 0;
    unsigned float prix = 0;            //Loyer + Charges

};

typedef struct Annonce Annonce;        

Liste liste = NULL;


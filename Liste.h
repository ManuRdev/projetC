//
// Created by Emmanuel Rose on 23/02/2017.
//

#ifndef PROJETC_MASTER_LISTE_H
#define PROJETC_MASTER_LISTE_H
#include "annonce.h"

//On d�finit la structure d'un d'une annoces
typedef struct Element
{
    Annonce annonce;
    struct Element *suivant;
}Element;
typedef Element* Liste;

Liste ajouterDebut(Liste liste, Annonce annonce);
void afficher(Liste liste);
#endif //PROJETC_MASTER_LISTE_H

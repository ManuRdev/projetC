//
// Created by Emmanuel Rose on 23/02/2017.
//

#include "Liste.h"

Liste ajouter(Liste liste, Annonce annonce)
{
    //Cr�ation du nouvel �l�ment
    Element *nouveau = NULL;
    nouveau = malloc(sizeof(*nouveau));

    if(nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //On complete le nouvel �l�ment avec des donn�es
    nouveau->annonce = annonce,
            nouveau->suivant = liste;

    //On retourne le nouvel �l�ment pour qu'il devienne la t�te de la liste
    return nouveau;
}

void afficher(Liste liste)
{
    //On parcourt toute la liste �l�ment par �l�ment jusqu'� l'�l�ment NULL
    Element *element = liste;
    while(element != NULL)
    {
        printf("%d -> ", element->annonce);
        element = element->suivant;
    }

    printf("NULL\n");
}


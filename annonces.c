//annonces.c

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "annonces.h"


// Création d'annonces
Liste creerAnnonce (Liste liste, int id;){
Annonce * new = NULL;
new = malloc(sizeof(*new));

if new = NULL; {
    exit(EXIT_FAILURE);
    }

// On remplit la nouvelle annonce avec les données
compteur =+1;
new->id = compteur;

//Si la liste est vide, on retourne cet élément pour qu'il devienne le premier
if (liste == NULL){
    return new;                          
    }
//Sinon on parcours la liste jusqu'au dernier élément
else {
    Annonce * curseur = liste;
    while (curseur->next != NULL){
        curseur = curseur * next;        
    }
    //Et on le met lui en dernier
    curseur -> next = new;

    //On retourne la liste
    return liste;
    }
}

// AFFICHER LES ANNONCES
void afficher (Liste liste){
    //On parcours la liste
    Annonce * annonce = liste;
    while (annonce !=NULL){
        printf ("Annonce n° : %d \nType : %s\nNb pièces :  %d\nSurface :  %.2f\nLoyer :  %.2f\nCharges :  %.2f\n Prix total %.2f\n\n", annonce->id, annonce->type, annonce->pieces, annonce->surface, annonce->loyer, annonce->charges, annonce->prix);
        annonce = annonce->next;
    }   
}

// CHARGER LA LISTE DEPUIS UN FICHIER

void charger(path){
    File * fichier = NULL;
    fichier = fopen(path),r"r");
    if (fichier == NULL){
        exit(EXIT_FAILURE):
    }
    
}

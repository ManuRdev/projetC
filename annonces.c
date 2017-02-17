//annonces.c

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "annonces.h"


// Création d'annonces
Liste creerAnnonce (Liste liste, int type, int pieces, float surface, float loyer, float charges;){
Annonce * new = NULL;
new = malloc(sizeof(*new));

if new = NULL; {
    exit(EXIT_FAILURE);
    }

// On remplit la nouvelle annonce avec les données
compteur =+1;
new->id = compteur;
new->type = type;
new->surface = surface;
new->loyer = loyer;
new->charges = charges;
new->prix = new.loyer + new.charges;  
    
    
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

void charger(fichier){
    printf("Attention, les données non enregistrées seont perdues ! Continuer ?\n");
    //Gerer le switch case pour continuer
    compteur = 0;
    File * fichier = NULL;
    fichier = fopen(fichier),"r");
    if (fichier == NULL){
        exit(EXIT_FAILURE):
    }
    
    //Lecture dans le fichier
   while fscanf(fichier, "%d %d %d %f %f %f %f %f, &Annonce.id, &Annonce.type, &Annonce.pieces, &Annonces.surface, &Annonce.loyer, &Annonce.charges, &Annonce.prix) != EOF)
                {
                    creerAnnonce(fscanf(fichier, "%d %d %d %f %f %f %f %f, &Annonce.id, &Annonce.type, &Annonce.pieces, &Annonces.surface, &Annonce.loyer, &Annonce.charges, &Annonce.prix) != EOF);
                    afficher();
                    
                }      
        
    //Fermeture du fichier
    fclose(fichier);
    
}

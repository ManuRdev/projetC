#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#inclufde <string.h>
#include "annonces.h"

int main(){

// ICi mettre le compteur, attention si fichier d'entrée, le charger sur le dernier ID

int compteur = 0;
const int TAILLE = 20;    

Liste liste = NULL;

// MENU d'ACCUEIL
    // Attention, mettre une vérif de saisie [ 10 ]
    int choix_accueil =0;
    printf("Bienvenue à l'Enseigne Spécialisée de Gestion Immobilière !\nQue voulez vous faire ?\n 1 : Ajouter une annonce\n2 : Afficher les annonces\n3 : Trier les annonces par type (appartement ou maison)\n4 : Chercher par nombre de pièces\n5 : Chercher par surface mini\n6 : Recherche multi-critères\n7 : Tri et recherche par loyer\n8 : Exporter les annonces\n9 : Charger les annonces\n10 : Quitter\n\n");
    scanf(%d", &choix_accueil;
    switch(choix_accueil)
          {
              case :1 :
                    // Instructions
                  break;
              
              case :2 :
                    // Instructions
                  break;
              
              case :3 :
                    // Instructions
                  break;
              
              case :4 :
                    // Instructions
                  break;              
              
              case :5 :
                    // Instructions
                  break;
              
              case :6 :
                    // Instructions
                  break;
              
              case :7 :
                    // Instructions
                  break;
              
              case :8 :
                    // Instructions
                  break;
              
              //Charger les annonces
              case :9 :
                  char fichier [TAILLE];    
                  printf("Saisissez le noom exact de votre fichier. Vérifiez bien sa présence dans le répertoire du programme !\n);
                  scanf(%s",fichier);
                  charger(fichier);
                  break;              
              
              case :10 :
                    // Instructions
                  break;
          }
              
              
    

    return 0;    
} 

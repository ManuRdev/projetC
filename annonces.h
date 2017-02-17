#ifndef ANNONCES_H_INCLUDED
#define ANNONCES_H_INCLUDED


// Definition de la structure d'une annonce
struct Annonce
{
    unsigned int id;                    //Numéro d'annonce
    unsigned int type = 0;              //Code de type (0 = appart, 1 = maison)
    unsigned int pieces= 1;             //Nombre de pièces       
    unsigned float surface = 9;             
    unsigned float loyer = 0;
    unsigned float charges = 0;
    unsigned float prix = 0;            //Loyer + Charges
}Annonce; 

// On défini l'alais
typedef Annonce* Liste;

//Fonctions
Liste creerAnnonce(Liste liste, int id);

Liste afficher(Liste liste);

Liste charger(fichier);

#endif 

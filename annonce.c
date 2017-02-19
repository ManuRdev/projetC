/*
 * =====================================================================================
 *
 *       Filename:  annonce.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18.02.2017 10:31:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Visouthiphongs Jérémie (VJ), jvisouth@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "annonce.h"
#include "menu.h"

void	afficherAnnonce(Liste liste)
{
	int	choix = 0;
	Annonce *curseur = liste;

	system("clear");
	printf("-----    Affichage de toutes les Annonces    -----\n\n");
	
	while (curseur != NULL)
	{
		printf("  -------------------- Annonce %d -------------------------\n", curseur->id);
		printf("    Type du logement : ");
		if (curseur->type == MAISON)
			printf("Maison");
		else if (curseur->type == APPARTEMENT)
			printf("Appartement");
		printf("\n    Nombre de pièces : %d  \t", curseur->piece);
		printf("Surface en mètres carré : %d\n", curseur->surface);
		printf("    Prix du loyer : %f  ", curseur->loyer);
		printf("Montant des charges : %f \n", curseur->charge);
		curseur = curseur->suivant;
		printf("  --------------------------------------------------------\n\n");
	}

	printf("1. Revenir au menu affichage\n");
	printf("2. Revenir au menu précédent\n\n");
	printf("Votre choix : ");
	scanf("%d", &choix);
	if(choix == 1)
	{
		system("clear");
		choix = menuAffichage();
		choixAffichage(choix, liste);
	}
	else if(choix == 2)
	{
		system("clear");
		choix = menuPrincipal();
		choixPrincipal(choix, liste);
	}
	else 
	{
		system("clear");
		afficherAnnonce(liste);
	}

}

Liste	ajouterAnnonce(Liste liste, int num_anno)
{
	int compteur = 1;
	char chaine[100];
	Annonce *nouveau = NULL;
	nouveau = malloc(sizeof(*nouveau));

	if (nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}
	do
	{
		system("clear");
		printf("-----    Saisie Annonce Numéro %d    -----\n\n", num_anno);
		printf("_ Type du logement ( Maison ou Appartement ) : ");
		scanf("%s", chaine);
		if (!strcasecmp(chaine, "maison"))
		{
			nouveau->type = MAISON;
		}
		else if (!strcasecmp(chaine, "appartement"))
		{
			nouveau->type = APPARTEMENT;
		}
	} while (strcasecmp(chaine, "maison") && strcasecmp(chaine, "appartement"));
	printf("_ Nombre de pièces : ");
	scanf("%d", &nouveau->piece);
	printf("_ Surface en mètres carrés : ");
	scanf("%d", &nouveau->surface);
	printf("_ Prix du loyer charges non comprises : ");
	scanf("%f", &nouveau->loyer);
	printf("_ Montant total des charges : ");
	scanf("%f", &nouveau->charge);
	nouveau->suivant = NULL;

	if (liste == NULL)
	{
		liste = nouveau;
	}
	else
	{
		compteur++;
		Annonce *tmp = liste;
		while (tmp->suivant != NULL)
		{
			tmp = tmp->suivant;
			compteur++;
		}

		tmp->suivant = nouveau;
	
	}
	nouveau->id = compteur;
	return liste;

}

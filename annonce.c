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

void	afficherAnnonce(Liste liste, int erreur_saisie)
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
	printf("0. Revenir au menu principale\n\n");

	if(erreur_saisie)
		printf("Erreur de saisie, veuillez recommencer : ");
	else
		printf("Votre choix : ");
	scanf("%d", &choix);
	if(choix == 1)
	{
		system("clear");
		choixAffichage(menuAffichage(0), liste);
	}
	else if(choix == 0)
	{
		system("clear");
		choixPrincipal(menuPrincipal(0, liste), liste);
	}
	else 
	{
		system("clear");
		afficherAnnonce(liste, 1);
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

void	ecrireAnnonce(Liste liste, FILE* fichier)
{
	Annonce *curseur = liste;
	while (curseur != NULL)
	{
		if (curseur->type == MAISON)
			fprintf(fichier, "%d maison %d %d %f %f\n", curseur->id, curseur->piece, curseur->surface, curseur->loyer, curseur->charge);
		else if (curseur->type == APPARTEMENT)
			fprintf(fichier, "%d appartement %d %d %f %f\n", curseur->id, curseur->piece, curseur->surface, curseur->loyer, curseur->charge);
		curseur = curseur->suivant;
	}

}

Liste	lireAnnonce(Liste liste, FILE *fichier)
{
	int	id = 0;
	char	type[255];
	int	piece = 0;
	int	surface = 0;
	float	loyer = 0;
	float	charge = 0;

	while (fscanf(fichier, "%d %s %d %d %f %f", &id, type, &piece, &surface, &loyer, &charge) != EOF)
	{
		Annonce *nouveau = NULL;
		nouveau = malloc(sizeof(*nouveau));

		if (nouveau == NULL)
		{
			exit(EXIT_FAILURE);
		}
		nouveau->id = id;
		if(!strcasecmp(type, "maison"))
		{
			nouveau->type = MAISON; 
		}
		else if (!strcasecmp(type, "appartement"))
		{
			nouveau->type = APPARTEMENT;
		}
		nouveau->piece = piece;
		nouveau->surface = surface;
		nouveau->loyer = loyer;
		nouveau->charge = charge;
		nouveau->suivant = NULL;
	

		if (liste == NULL)
		{
			liste = nouveau;
		}
		else
		{
			Annonce *tmp = liste;
			while (tmp->suivant != NULL)
			{
				tmp = tmp->suivant;
			}
			tmp->suivant = nouveau;
	
		}
	}
	return liste;
}

int	calculerNbAnnonce(Liste liste)
{
	int	taille = 0;
	Annonce *annonce = liste;

	while(annonce != NULL)
	{
		taille++;
		annonce = annonce->suivant;
	}

	return taille;
}

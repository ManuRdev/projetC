/*
 * =====================================================================================
 *
 *       Filename:  fichier.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19.02.2017 21:27:58
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

void	sauvegardeFichier(Liste liste)
{
	char	nom_fichier[255];
	FILE	*fichier = NULL;

	system("clear");

	printf("-----    Menu Sauvegarde    -----\n\n");
	printf("Veuillez saisir le nom du fichier de sauvegarde.\n");
	printf("Entrez 0 pour revenir au menu précédent sans sauvegarder\n\n");
	printf("Nom de votre fichier de sauvegarde : ");
	scanf("%s", nom_fichier);

	if(strcmp(nom_fichier, "0"))
	{
		strcat(nom_fichier, ".txt");
		fichier = fopen(nom_fichier, "w");

		if(fichier == NULL)
		{
			exit(EXIT_FAILURE);
		}
	
		ecrireAnnonce(liste, fichier);
		fclose(fichier);
	}
}


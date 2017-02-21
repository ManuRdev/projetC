/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18.02.2017 10:31:11
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
#include "menu.h"
#include "annonce.h"

int	main (int argc, char *argv[])
{
	Liste	liste = NULL;
	FILE *fichier = NULL;

	if(argc == 2)
	{
		fichier = fopen(argv[1], "r");
		if(fichier == NULL)
		{
			exit(EXIT_FAILURE);
		}
	
	liste = lireAnnonce(liste, fichier);
	fclose(fichier);

	}
	
	choixPrincipal(menuPrincipal(0, liste), liste);

	return 0;
}

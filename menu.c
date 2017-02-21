/*
 * =====================================================================================
 *
 *       Filename:  menu.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19.02.2017 10:39:36
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

//Fonction menuPrincipal qui pourra être utilisé à loisir

int	menuPrincipal(int erreur_saisie, Liste liste)
{
	int choix_principal = 0;
	int nb_anno = calculerNbAnnonce(liste);

	system("clear");
	MACRO();
	printf("-----    Menu Principal   -----\n\n");
	printf("Il y a actuellement %d annonce(s) dans votre base de données.\n", nb_anno);
	printf("Souhaitez-vous :\n\n");
	printf("1. Ajouter une ou plusieurs annonces\n");
	printf("2. Afficher les annonces\n");
	printf("3. Sauvegarder vos annonces\n");
	printf("4. Quitter\n\n");
	if(erreur_saisie)
		printf("Erreur de saisie, veuillez recommencer : ");
	else
		printf("Votre choix : ");
	scanf("%d", &choix_principal);
	return choix_principal;
}

//Fonction récupérant la valeur de menuPrincipal afin de charger la suite du prog

void	choixPrincipal(int choix, Liste liste)
{
	switch(choix) 
	{
		case 1 :
			menuAjout(liste);
			break;
		case 2 :
			choixAffichage(menuAffichage(0), liste);
			break;
		case 3 :
			sauvegardeFichier(liste);
			choixPrincipal(menuPrincipal(0, liste), liste);
			break;
		case 4 :
			break;
		default :
			choixPrincipal(menuPrincipal(1, liste), liste);
			break;
	}
}

// Fonction menuAjout permettant la saisie de plusieurs annonces 

void	menuAjout(Liste liste)
{
	int	nb_anno = 0;
	
	system("clear");
	printf("-----    Menu Ajout    -----\n\n");
	printf("Veuillez renseigner le nombre d'annonces\n");
	printf("que vous souhaitez ajouter. 0 vous permettra\n");
	printf("de revenir au menu précédent.\n\n");
	printf("Nombre d'annonces à saisir : ");
	scanf("%d", &nb_anno);

	if(nb_anno == 0)
	{
		choixPrincipal(menuPrincipal(0, liste), liste);
	}
	else if(nb_anno > 0)
	{
		for(int i = 0; i < nb_anno; i++)
		{
			liste = ajouterAnnonce(liste, i+1);	
		}
		choixPrincipal(menuPrincipal(0, liste), liste);
	}
	else 
	{
		printf("Erreur de saisie, veuillez recommencer : \n");
		menuAjout(liste);
	}

}

// Fonction menuAffichage proposant l'affichage selon certains critères 

int	menuAffichage(int erreur_saisie)
{
	int	choix_affichage = 0;

	system("clear");
	printf("-----    Menu Affichage    -----\n\n");
	printf("Voici les options d'affichage de votre application : \n\n");
	printf("1. Toutes les annonces\n");
	printf("2. Uniquement les maisons ou les appartements\n");
	printf("3. En fonction du nombre de pièce renseigné\n");
	printf("4. En fonction de la surface habitable minimale\n");
	printf("5. En fonction du nombre de pièces minimal et d'un loyer maximal\n");
	printf("0. Retour au menu principal\n\n");
	if(erreur_saisie)
		printf("Erreur de saisie, veuillez recommencer : ");
	else	
		printf("Votre choix : ");
	scanf("%d", &choix_affichage);
	return	choix_affichage;
}

// Fonction récupérant la valeur de menuAffichage et éxécutant les fonctions d'affichage

void	choixAffichage(int choix, Liste liste)
{
	switch(choix)
	{
		case 1 :
			afficherAnnonce(liste, 0);
			break;
		case 2 :
			break;
		case 3 :
			break;
		case 4 :
			break;
		case 5 :
			break;
		case 0 :
			choixPrincipal(menuPrincipal(0, liste),liste);
			break;
		default :
			choixAffichage(menuAffichage(1), liste);
			break;

	}
}

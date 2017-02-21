/*
 * =====================================================================================
 *
 *       Filename:  annonce.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18.02.2017 10:31:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Visouthiphongs Jérémie (VJ), jvisouth@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef ANNONCE_H
#define ANNONCE_H

typedef enum Type
{
	MAISON, APPARTEMENT
} Type;

typedef	struct	Annonce
{
	int	id;
	enum	Type type;
	int	piece;
	int	surface;
	float	loyer;
	float	charge;
	struct	Annonce *suivant;
}Annonce;

typedef	Annonce* Liste;

void	afficherAnnonce(Liste liste, int erreur_saisie);

Liste	ajouterAnnonce(Liste liste, int num_anno);

void	ecrireAnnonce(Liste liste, FILE* fichier);

Liste	lireAnnonce(Liste liste, FILE* fichier);

int	calculerNbAnnonce(Liste liste);

#endif


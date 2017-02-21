/*
 * =====================================================================================
 *
 *       Filename:  menu.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19.02.2017 10:37:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Visouthiphongs Jérémie (VJ), jvisouth@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef MENU_H
#define MENU_H
#if defined(__APPLE__) && defined(__MACH__)
#define MACRO() printf("Ceci est un MAC");
#elif defined(_WIN32)
#define MACRO() printf("Je suis Win32");
#endif
#include "annonce.h"
#include "fichier.h"

int	menuPrincipal(int erreur_saisie, Liste liste);

void	choixPrincipal(int choix, Liste liste);

void	menuAjout();

int	menuAffichage(int erreur_saisie);

void	choixAffichage(int choix, Liste liste);

#endif

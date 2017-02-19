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
#include "annonce.h"

int	menuPrincipal();

void	choixPrincipal(int choix, Liste liste);

void	menuAjout();

int	menuAffichage();

void	choixAffichage(int choix, Liste liste);

#endif

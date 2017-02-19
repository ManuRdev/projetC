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

int	main ()
{
	Liste	liste = NULL;
	int	choix = 0;

	choix = menuPrincipal();
	choixPrincipal(choix, liste);

	return 0;
}

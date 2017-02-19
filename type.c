/*
 * =====================================================================================
 *
 *       Filename:  type.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18.02.2017 14:11:17
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
#include "type.h"

char * typeToString(Type type)
{
	switch (type)
	{
		case Maison:
			return "Maison";
		case Appartement:
			return "Appartement";
		default :
			return "";
	}
}

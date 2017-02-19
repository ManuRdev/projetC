/*
 * =====================================================================================
 *
 *       Filename:  type.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18.02.2017 14:12:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Visouthiphongs Jérémie (VJ), jvisouth@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef TYPE_H
#define TYPE_H

typedef enum Type
{
	Maison, Appartement
}Type;

char *	typeToString(Type type);

#endif

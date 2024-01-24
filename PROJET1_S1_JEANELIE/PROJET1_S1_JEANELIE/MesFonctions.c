/* Jérémie Jean-Elie le, 11.01.2024 */


#include "mainProjet1_s1.c"
#include "MesFonctions.h"

/* Librairies standards */
#include <stdio.h>

void infoVariables(float valUser)
{
	//-- déclaration de variables locales --//
	int valEntier;
	float valUser;

	valEntier = valUser;

	if (valUser < 0.0)	//Test pour savoir si la valeur est négative ou pas
	{
		printf("La valeur est négative \n");
	}
	else
	{
		printf("La valeur est positive \n");
	}

	/* On soustrait valEntier(entier) à valUser(réel) pour voir si le résultat équivaut à 0.
	Si le résultat équivaut à 0, cela veut dire que nous avons introduit un nombre entier.
	Si le résultat ne vaut pas 0, cela veut dire que nous avons rentré une valeur réelle. */
	if ((valUser - valEntier) == 0)
	{
		printf("La valeur est entière \n");
		
		/* On effectue ici un simple modulo par 2. Si le résultat est 0, cela veut dire que notre valeur d'entrée est paire.
		Si le résultat ne vaut pas 0, cela veut dire que notre valeur est impaire */
		if (valUser % 2 == 0)
		{
			printf("La valeur est paire \n");
		}
		else
		{
			printf("La valeur est impaire \n");
		}

		if (valUser >= -128 && valUser <= 255)
		{
			printf("Type à utiliser : char ou int8_t \n");
		}
		else
		{
			printf("Type à utiliser : short ou int16_t \n");
		}
	}
	else
	{
		printf("La valeur est réelle \n");
		printf("Cette valeur ne peut ni être paire ou impaire \n");
		printf("Type à utiliser : float \n");
	}

}
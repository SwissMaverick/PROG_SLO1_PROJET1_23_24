/* J�r�mie Jean-Elie le, 11.01.2024 */


#include "mainProjet1_s1.c"
#include "MesFonctions.h"

/* Librairies standards */
#include <stdio.h>

void infoVariables(float valUser)
{
	//-- d�claration de variables locales --//
	int valEntier;
	float valUser;

	valEntier = valUser;

	if (valUser < 0.0)	//Test pour savoir si la valeur est n�gative ou pas
	{
		printf("La valeur est n�gative \n");
	}
	else
	{
		printf("La valeur est positive \n");
	}

	/* On soustrait valEntier(entier) � valUser(r�el) pour voir si le r�sultat �quivaut � 0.
	Si le r�sultat �quivaut � 0, cela veut dire que nous avons introduit un nombre entier.
	Si le r�sultat ne vaut pas 0, cela veut dire que nous avons rentr� une valeur r�elle. */
	if ((valUser - valEntier) == 0)
	{
		printf("La valeur est enti�re \n");
		
		/* On effectue ici un simple modulo par 2. Si le r�sultat est 0, cela veut dire que notre valeur d'entr�e est paire.
		Si le r�sultat ne vaut pas 0, cela veut dire que notre valeur est impaire */
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
			printf("Type � utiliser : char ou int8_t \n");
		}
		else
		{
			printf("Type � utiliser : short ou int16_t \n");
		}
	}
	else
	{
		printf("La valeur est r�elle \n");
		printf("Cette valeur ne peut ni �tre paire ou impaire \n");
		printf("Type � utiliser : float \n");
	}

}
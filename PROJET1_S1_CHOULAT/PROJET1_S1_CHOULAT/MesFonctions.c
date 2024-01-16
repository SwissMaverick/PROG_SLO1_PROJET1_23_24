/*InfoVariable*/
#include <stdio.h>	
#include "MesFonctions.h"

void InfoVariable(float valUtilisateur)
{
	//déclaration
	int valEntier;
	float reste;


	valEntier = (int)valUtilisateur;
	if (valUtilisateur < 0.0)
	{
		printf("la valeur est Negative\n");
	}
	else
	{
		printf("la valeur est Positive\n");
	}

	//valeur entière
	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("la valeur est Entiere\n");

		if ((valUtilisateur / 2.0) == 0.0)
		{
			printf("la valeur est Paire\n");
		}
		else
		{
			printf("la valeur est Impaire\n");
		}
		if (valUtilisateur >= -128 || valUtilisateur <= 255)
		{
			printf("Type a utiliser: char ou int8_t\n");
		}
		else
		{
			printf("Type a utiliser: short ou int16_t\n");
		}
	}

	//valeur réelle
	else
	{
		printf("la valeur est Reelle\n");

		printf("cette valeur peut être paire ou impaire\n");

		printf("Type a utiliser: float\n");
	}

}
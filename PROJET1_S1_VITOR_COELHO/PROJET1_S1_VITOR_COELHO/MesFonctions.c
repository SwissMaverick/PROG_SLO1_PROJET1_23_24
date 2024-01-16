/*
Fonctions : -infoVariables


Réalisé par : Vitor Coelho
*/

//-- fonction --//
#include "headerFile.h"
#include <stdio.h>



void InfoVariables(valUtilisateur)
{

	// Déclaration des variables
	short valEntier = 0;
	float reste = 0;
	
	// Caste du paramétre d'entrée sous type entier (short).
	valEntier = (short) valUtilisateur;

	// Test valeur positive ou négative
	if (valUtilisateur > 0.0)
	{
		printf("la valeur est Positive \n");
	}
	else
	{
		printf("la valeur est Négative \n");
	}

	//Test valeur réelle ou entière
	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("la valeur est Réelle \n");
		printf("cette valeur ne peut ni etre paire ou impaire \n");
		printf("Type à utiliser : float \n");
	}
	else
	{
		printf("la valeur est Entiere \n");

		if ((valUtilisateur / 2.0) == 0.0)
		{
			printf("la valeur est paire \n");
		}
		else
		{
			printf("la valeur est impaire \n");
		}
		if ((valUtilisateur >= -128) || (valUtilisateur <= 255))
		{
			printf("Type à utiliser : short ou int16_t \n");
		}
		else
		{
			printf("Type à utiliser : char ou int8_t \n");
		}
	}
}
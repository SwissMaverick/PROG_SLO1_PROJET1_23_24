// Mes Fonctions.c
//Etienne De Oliveira

#include "MesFonctions.h"	//-> librairie perso
#include <stdio.h>          // entrée - sortie


void infoVariables(double valeurUtilisateur)
{
	//-- déclaration de variable --//
	long valEntier;
	float reste;

	//-- début prog --//
	valEntier = valeurUtilisateur; //caste de la partie réel => garder que la partie entière
	//-- test positif ou négatif --//
	if (valeurUtilisateur < 0.0)
	{
		printf("la valeur est Negative \n");
	}
	else
	{
		printf("la valeur est Positive \n");
	}
	//-- test entier --//
	if ((valeurUtilisateur - valEntier) == 0.0)
	{
		printf("la valeur est Entiere \n");
		//-- test paire ou impaire --//
		if ((valeurUtilisateur / 2.0) == 0.0)
		{
			printf("la valeur est Paire \n");
		}
		else
		{
			printf("la valeur est Impaire \n");
		}
		//-- type à utiliser --//
		if ((valeurUtilisateur >= -128) || valeurUtilisateur <= 255)
		{
			printf("Type a utiliser : char ou int8_t \n");
		}
		else
		{
			printf("Type a utiliser : short ou int16_t \n");
		}
	}
	else
	{
		printf("la valeur est Reelle \n");
		printf("cette valeur ne peut ni etre paire ou impaire \n");
		printf("Type a utiliser : float \n");
	}

}

//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet_S1_Mlynek_Thomas
// Nom du fichier 		: MesFonctions.c
// Date de création 	: 11.01.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Thomas Mlynek 
//
// Description          : Fonction de controle du type de variable requis pour un nombre donné
//						  (Positif, Négatif, à virgule)
//
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>            

//--- librairie perso ---//
#include "MesFonctions.h"

//-- programme principal --// 
void main()
{
	float InfoVariable(float valUser;)
	{
		int valEntier;


		valEntier = valUser;

		if (valUser < 0.0)
		{
			printf("\nLa valeur est Negative");
		}
		else
		{
			printf("\nLa valeur est Positive");
		}

		if ((valUser - valEntier) == 0)
		{
			printf("\nLa valeur est Entiere");

			if ((valUser / 2.0) == 0.0)
			{
				printf("\nla vlauer est paire");
			}
			else
			{
				printf("\nLa valeur est impaire");
			}

			if ((valUser >= -128) || (valUser <= 255))
			{
				printf("\nType à utiliser : char ou int8_t");
			}
			else
			{
				printf("\nType à utiliser : short ou int16_t");
			}
		}
		else
		{
			printf("\nLa valeur est Réelle");
			printf("\nCette valeur ne peut ni paire ou impaire");
			printf("\nType à utiliser : float");
		}
	}
}
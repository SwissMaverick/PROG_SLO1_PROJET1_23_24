//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Info Variable 
// Nom du fichier 		: MesFonctions.c
// Date de création		: 11.01.2024
//
// Auteur 				: Nicolas Besson
//
// 
// Description          : .h pour les prototype de fonction de l'exercice             
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie

//--- librairie perso ---//
#include "MesFonctions.h"			// header file fonction

void InfoVariable(float valUser)
{
	// initialisation des variable 
	short valEntier;
	float rest;
	short modulo; //valeur pour connaitre si paire ou impaire car peu pas utilise le modulo avec float 


	valEntier = valUser;

	//test pour savoir si la valeur est negative ou positive 
	if (valUser < 0.0)
	{
		printf("La valeur est negative\n");
	}
	else
	{
		printf("La valeur est positive\n");
	}
	
	// Bloc test permettant de connaitre si la variable et paire ou impaire, si elle est a virgule 
	// et donne le type de variable qui devrait etre utilisé
	if ((valUser - valEntier) == 0.0)
	{
		printf("La valeur est Entiere\n");
		
		//connaitre le chiffre apres la virgule pour savoir si paire ou impaire 
		modulo = valUser;
		modulo = modulo % 2;
		rest = modulo;

		if (rest == 0.0)
		{
			printf("La valeur est paire\n");
		}
		else
		{
			printf("La valeur est impaire\n");
		}

		if ((valUser >= -128) && (valUser <= 255))
		{
			printf("Type a utilise: char ou int8_t\n");
		}
		else
		{
			printf("Type a utilise: short ou int16_t\n");
		}
	}
	else
	{
		printf("La valeur est Reelle\n");
		printf("Cette valeur ne peut etre ni paire ou impaire\n");
		printf("Type a utilise: Float\n");
	}
}

/*
*------------------------------------------------------------------------
* Nom du projet					: Project1_S1_Blitshteyn_Jacob
* Date de création du projet	: 11/01/2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Blishteyn Jacob
* Date de création du fichier	: 11/04/2024
*------------------------------------------------------------------------
* Nom du dernier éditeur		: Blishteyn Jacob
* Version						: x.x
* Date de dernière modification	: 11/04/2024
*------------------------------------------------------------------------
* But du fichiers				: faire les fonctions demander dans les doné du test
* commentaire					: N/A
*------------------------------------------------------------------------
*/
/*--directive préprocesseur pour supprimer certains warining --*/
#pragma warning(disable : 4996)		//-- warning concernant les scanf

/*-- librairie publique --*/
#include <stdio.h>                  // entrée - sortie

/*-- librairie privé --*/
#include "MesFonctions.h"

/*-- déclaration variable --*/
float valUtilisateur;
int valEntier;

/*-- déclaration fonction --*/


/*-- fontion princpale --*/
float infoVariable(valUser)
{
	valEntier = valUser, valUtilisateur = valUser;

	if (valUtilisateur < 0)
	{
		printf("\nLa valeur est Negative");

	}
	else
	{
		printf("\nLa valeur est Positive");

	}

	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("\nLa valeur est Entiere");

		if (valUtilisateur / 2 == 0)
		{
			printf("\nLa valeur est paire");

		}
		else
		{
			printf("\nLa valeur est impaire");

		}

		if (-128 <= valUtilisateur <= 255)
		{
			printf("\nType a utiliser : char ou int8_t\n\n\n");

		}
		else
		{
			printf("\nType a utiliser : short ou int16_t\n\n\n");

		}
	}
	else
	{
		printf("\nLa valeur est Réelle !\ncette valeur ne peut étre ni paire ou impaire.\nType a utiliser : float\n\n\n");

	}

}

/*-- documentation --*/


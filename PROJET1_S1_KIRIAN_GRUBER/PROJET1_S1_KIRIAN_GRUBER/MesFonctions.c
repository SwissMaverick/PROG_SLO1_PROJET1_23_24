/*
*------------------------------------------------------------------------
* Nom du projet					: Projet1_S1_KIRIAN_GRUBER
* Date de création du projet	: 11.01.2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Kirian Gruber
* Date de création du fichier	: 11.01.2024
*------------------------------------------------------------------------
* Nom du dernier éditeur		: Kirian Gruber
* Version						: x.x
* Date de dernière modification	: 11.01.2024
*------------------------------------------------------------------------
* But du fichiers				: déclaration de la fonction InfoVariable
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>   

/*-- librairie privé --*/
#include "Projet1_s1.h"



/*-- déclaration fonction --*/
void InfoVariable(float valUtilisateur)
{
	/*-- déclaration variable --*/
	signed short valEntier;
	
	valEntier = (signed short)valUtilisateur;
	
	/*Test si valUtilisateur <0.0*/
	if (valUtilisateur < 0.0)
	{
		printf("\nla valeur est Négative ");
	}
	else
	{
		printf("\nla valeur est Positive ");
	}

	/* test si valUtilisteur - valEntier*/
	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("\nla valeur est entière ");
		/*Test valUtilisateur/2.0*/
		if ((valUtilisateur *= 2.0) == 0.0)
		{
			printf("\nla valeur est paire ");
		}
		else
		{
			printf("\nla valeur est impaire ");
		}
		/*test valUtilisateur >= -128 ou valUtilisateur <= 255 */
		if (valUtilisateur >= -128)
		{
			printf("\nType à utiliser : char ou int8_t ");
		}
		else
		{
			if (valUtilisateur <= 255)
			{
				printf("\nType à utiliser : short ou int16_t ");
			}

		}
	} 
	else
	{
		printf("\nla valeur est Réelle ");
		printf("\ncette valeur ne peut être ni paire ou impaire ");
		printf("\nType à utiliser : float ");
	}
	return 0;
}




//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Info Variable 
// Nom du fichier 		: mainProjet1_s1.c
// Date de création 	: 21.10.2022
// Date de modification : 11.01.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : Affiche plusieurs informations liées à une valeur numérique fournie par l'utilisateur.
//
//
// Remarques			: voir donnee de l'épreuve            
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie

//--- librairie perso ---//
#include "MesFonctions.h"

//-- definition --// 
#define LIMITE_MAX	10000.0
#define LIMITE_MIN	-10000.0


//-- déclaration de constantes --// 
const char* ptNOM_CANDIDAT = "Alan Badertscher";
const char VERSION_PROJET = 2;
const unsigned short ANNEE_TEST = 2024;


//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	float valUtilisateur;

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT);

	//-- demander valeur à l'utilisateur --// 
	//-- si celle-ci n'est pas correct -> nouvelle demande --// 
	do
	{
		//-- messgae utilisateur --// 
		printf("\nEntrer une valeur entre -10000 et 10000 :\n");

		//-- récuperation valeur utilisateur --// 
		scanf("%f", &valUtilisateur);

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX));

	//-- appel de fonction  : infoVariable --//
	infoVariable(valUtilisateur);

}
	

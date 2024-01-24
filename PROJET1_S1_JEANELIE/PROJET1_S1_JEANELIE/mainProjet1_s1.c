//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Info Variable 
// Nom du fichier 		: mainProjet1_s1.c
// Date de création 	: 21.10.2022
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques			: Jérémie Jean-Elie le, 11.01.2024           
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standard ---//
#include <stdio.h>                  // entrée - sortie

//--- librairie perso ---//


//-- definition --// 
#define LIMITE_MAX	10000.0
#define LIMITE_MIN	-10000.0


//-- déclaration de constantes --// 
const char* ptNOM_CANDIDAT = "Jean-Elie Jérémie";
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 


//-- programme principal --// 
void main(float valUser)
{
	//-- déclaration de variables locales --//

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur à l'utilisateur --// 
	//-- si celle-ci n'est pas correct -> nouvelle demande --// 
	do
	{
		//-- message utilisateur --// 
		printf("\nEntrer une valeur entre -10000 et 10000 : "); 

		//-- récuperation valeur utilisateur --// 
		scanf("%f", & valUser);

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUser < LIMITE_MIN) || (valUser > LIMITE_MAX));

	//-- appel de fonction  : infoVariable 
	valUser = infoVariables();
	
}
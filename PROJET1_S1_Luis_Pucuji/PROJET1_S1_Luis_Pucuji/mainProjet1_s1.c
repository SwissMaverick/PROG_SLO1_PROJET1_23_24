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
const char* ptNOM_CANDIDAT = "xxx"; 
const char VERSION_PROJET = 1; 
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
		printf("\nEntrer une valeur entre -10000 et 10000 : "); 

		//-- récuperation valeur utilisateur --// 
		scanf("%f", &valUtilisateur); 

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX)); 

	//-- appel de fonction  : infoVariable 
	InfoVariables( );



	
} // Fin Main


 

//-- Deéfinition de la focntion : infoVariable 


float InfoVariables( float valUser)
{
	int valEntier;        // Déclaration variable valEntier
	float reste;          // Déclaration variable reste

	valEntier = valUser;  // Caste de la partie réel

	if (valUser < 0.0)    //TEST condition
	{
		printf("=> la valeur est Positive ! \n "); // affichage
	}
	else 
	{
		printf("=> la Valeur est Négative ! \n "); // affichage
	}


	if (valUser - valEntier == 0.0)									    //TEST condition
	{
		printf("=> la valeur est Réelle !  \n ");						// affichage
		printf("=> Cette valeur ne peut ni paire iu impaire !  \n ");   // affichage
		printf("=> Type à utiliser : float \n ");						// affichage
	}
	else
	{
		printf("=> La valeur est Entiere \n ");
		if (valUser / 2.0 == 0.0 )						//TEST condition
		{
			printf("=>La valeur est Impaire \n ");
		}
		else
		{
			printf("=> La valeur est paire \n ");
		}
		if (valUser >= -128 || valUser <= 255)			//TEST condition
		{
			printf("=> Type à utiliser : short \n ");
		}
		else
		{
			printf("=> Type à utiliser : char  \n ");
		}
	}

	return (valUser);
}
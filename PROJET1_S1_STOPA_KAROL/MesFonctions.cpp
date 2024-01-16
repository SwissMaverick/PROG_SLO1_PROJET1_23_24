// Date		: 11.01.2024
// Auteur	: Stopa Karol

//--- librairie standart ---//
#include <stdio.h> 

// Fonction
int infoVariable(float valUser)
{
	// Déclaration des variables
	int valEntier;
	float reste;

	// Caste de la partie réel => garder que la partie entière
	valEntier = valUser;

	// Vérifie si la valeur est négative ou positive
	if (valUser < 0.0)
	{
		// Affichage du message en cas de valeur négative
		printf("la valeur est Négative\n");
	}
	else
	{
		// Affichage du message en cas de valeur positive
		printf("la valeur est Positive\n");
	}

	// Vérifie si la valeur est entiere ou réelle
	if ((valUser - valEntier) == 0.0)
	{
		// Affichage du message en cas de valeur entiere
		printf("la valeur est Entiere\n");

		// Vérifie si la valeur est paire ou impaire
		if(((int)valUser % (int)2.0) == 0.0)
		{
			// Affichage du message en cas de valeur paire
			printf("la valeur est paire\n");
		}
		else
		{
			// Affichage du message en cas de valeur impaire
			printf("la valeur est impaire\n");
		}

		// Vérifie quelle type utiliser
		if ((valUser >= -128) && (valUser <= 255))	// J'ai modifier le OU du FlowChart par un ET
		{
			// Affichage du type à utiliser (char ou int8_t)
			printf("Type à utiliser : char ou int8_t\n");
		}
		else
		{
			// Affichage du type à utiliser (short ou int16_t)
			printf("Type à utiliser : short ou int16_t\n");
		}
	}
	else
	{
		// Affichage du message en cas de valeur réelle
		printf("la valeur est Réelle\n");
		printf("cette valeur ne peut ni paire ou impaire\n");

		// Affichage du type à utiliser (float)
		printf("Type à utiliser : float\n");
	}
	return(0);
}
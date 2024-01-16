 
/*================== Function ====================
 * @brief description de la fonction
 *
 * Cette fonction va prendre le paramètre d'entrée et indiquer s'il est:
 *		- Positif ou Négatif
 *		- Réel ou Entier
 *		- Pair / Impaire / Ni pair ni impaire
 *		- Le type à utiliser (float, int8_t,etc)
 *
 * @param paramètte1 nombre à analyser.
 * @return retoune 0 si tous c'est bien terminé.
 */
int infoVariable(float Nombre)
{
	//-- déclaration de variables locales --//
	int valEntier = Nombre; //garder uniquement la partie entière du nombre d'entrée de la fonctions 
	int reste = 0; //Pas utilisé

	//-- Indique à l'utilisateur si le nombre entré est positif ou négatif --//
	if (Nombre < 0.0)
	{
		printf("La valeur est Negative\n");
	}
	if (Nombre > 0.0)
	{
		printf("La valeur est Positive\n");
	}
	if (Nombre - valEntier == 0.0)
	{
		printf("La valeur est Entiere\n");
		if (Nombre / 2 == 0.0)
		{
			printf("La valeur est Paire\n");
		}
		if (Nombre / 2 != 0.0) // erreur
		{
			printf("La valeur est Impaire\n");
		}
		if (Nombre >= -128 || Nombre <= 255)
		{
			printf("Type a utiliser : char ou int8_t\n");
		}
		else
		{
			printf("Type a utiliser : short ou int16_t\n");
		}
	}
	if (Nombre - valEntier != 0.0)
	{
		printf("La valeur est Reelle\n");
		printf("Cette valeur ne peut etre ni paire ou impaire\n");
		printf("Type a utiliser : float\n");
	}
	return 0;

}
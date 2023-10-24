#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, taille, temporaire;
	
	for (taille = 0; s[taille] != '\0'; taille++)
		;;

	for (i = 0; i < taille/2; i++)
	{
		temporaire = s[i];
		s[i] = s[taille - 1 - i];
		s[taille - 1 - i] = temporaire;
	}
		
}

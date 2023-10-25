#include "main.h"

/**
*reverse_array - function that reverses the content of an array of integers
*@a: array
*@n: number of elements of the array
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int temporaire = 0;
	int debut = 0;
	int fin = n - 1;

	while (debut < fin)
	{
		temporaire = *(a + debut);
		*(a + debut) = *(a + fin);
		*(a + fin) = temporaire;
		debut++, fin--;
	}
}

#include "main.h"

/**
*_sqrt_help - find the root
*@n: number
*@root: test the root
*Return: natural square root, else -1
*/

int _sqrt_help(int n, int root)
{
	if (root * root > n)
		return (-1);
/*si n n'a pas de racine carré naturel -> return -1 */
	if (root * root == n)
		return (root);
/*si le carré de root est n, root est la racine carré de n donc return root*/
	return (_sqrt_help(n, root + 1));
/*sinon, recursion à root+1 et recommence*/
}

/**
*_sqrt_recursion - function that returns the natural square root
*@n: number
*Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
/*si n negatif, pas de square root*/
	}
	return (_sqrt_help(n, 0));
/*sinon, va choper l'autre fonction, avec n le nombre et 0 le début de root*/
}

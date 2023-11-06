#include "main.h"

/**
*_memcpy - function that copies memoty area
*@dest: pointer
*@src: memory area
*@n: bytes
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] =  src[i];

	return (dest);
}

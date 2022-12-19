#include "main.h"
#include <string.h>
/**
 * _strlen - to print the length
 * @s: the character
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s++; )
		a++;
	return (a);
}

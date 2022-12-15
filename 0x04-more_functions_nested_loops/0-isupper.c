#include "main.h"
/**
 * _isupper - to check if it is upper case
 * @c: the variable to check
 * Return: 1 if true other wise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

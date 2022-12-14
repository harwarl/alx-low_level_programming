#include "main.h"

/**
 * _abs - to get the absolute of a number
 * @n: The number to get it absiolute
 * Return: absolute of a number
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

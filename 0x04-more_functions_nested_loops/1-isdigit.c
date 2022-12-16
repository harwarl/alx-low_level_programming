#include "main.h"
/**
 * _isdigit - to check for a digit
 * @c: the digit to check
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

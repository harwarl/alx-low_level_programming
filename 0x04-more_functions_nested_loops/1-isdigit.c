#include "main.h"
/**
 * _isdigit - to check for a digit
 * @c: the digit to check
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);
}

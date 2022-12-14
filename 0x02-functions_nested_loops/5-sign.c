#include "main.h"
/**
 * print_sign - to print the signs
 * @n: the value to check
 * Return: 1 f n is greater
 * 0 if n is zero
 * -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

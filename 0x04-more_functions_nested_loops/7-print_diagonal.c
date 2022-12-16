#include "main.h"
/**
 * print_diagonal - to print diagonal
 * @n: the number of times to print n
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('\\');
		_putchar('\n');
	}
}

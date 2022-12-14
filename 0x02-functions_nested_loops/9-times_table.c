#include "main.h"
/**
 * times_table - times table normal
 * Return: 0
 */
void times_table(void)
{
	int x;
	int n;
	int prod;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (x = 0; x < 10; x++)
		{
			_putchar(',');
			_putchar(' ');
			prod = n * x;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

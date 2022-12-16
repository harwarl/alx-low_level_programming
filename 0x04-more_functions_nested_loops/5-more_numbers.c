#include "main.h"
/**
 * more_numbers - to print more numbers
 * Return: to get numbers
 */
void more_numbers(void)
{
	int n, x;

	for (n = 0; n <= 10; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

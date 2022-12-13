#include "main.h"
/**
 * print_alphabet_x10 - Entry
 *
 */
void print_alphabet_x10(void)
{
	char n;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

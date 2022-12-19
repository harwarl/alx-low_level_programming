#include "main.h"
/**
 * _puts - the name of the function
 * @str: the inputted string
 * Return: 0
 */
void _puts(char *str)
{
	int p;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');

}

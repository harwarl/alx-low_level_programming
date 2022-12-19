#include "main.h"
/**
 * _puts - the name of the function
 * @str: the inputted string
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}

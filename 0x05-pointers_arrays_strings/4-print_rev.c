#include "main.h"
/**
 * print_rev- name of the function
 * @str: string to be reversed
 * Return: reversed string
 */
void print_rev(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	i = len - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

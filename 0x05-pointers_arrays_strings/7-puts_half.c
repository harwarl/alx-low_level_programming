#include "main.h"
/**
 * puts_half - puts half of a string
 * @str: the string
 * Return half of a string
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	j = i / 2;
	if (i % 2 != 0)
		j = (i - 1) / 2;
	while (j > 0)
	{
		_putchar(str[i - j]);
		j--;
	}
	_putchar('\n');
}

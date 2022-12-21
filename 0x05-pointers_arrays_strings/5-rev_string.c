#include "main.h"
/**
 * rev_string - function name
 * @s: the character to reverse
 * Return: reversed
 */
void rev_string(char *s)
{
	int i, a, b;
	char d;

	while (s[a] != '\0')
		a++;
	i = a - 1;
	while (b = 0; i >= 0 && b < i; i--, b++)
	{
		d = s[b];
		s[b] = s[i];
		s[i] = d;
	}
}

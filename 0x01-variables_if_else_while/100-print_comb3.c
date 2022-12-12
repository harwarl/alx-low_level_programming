#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	for (n = 48; n <= 57; n++)
	{
		for (x = n + 1; x <= 57; x++)
		{
			putchar(n);
			putchar(x);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;
	int y;

	for (n = 48; n <= 57; n++)
	{
		for (x = n + 1; x <= 57; x++)
		{
			for (y = x + 1; y <= 57; y++)
			{
				putchar(n);
				putchar(x);
				putchar(y);
				if (n == 55 && x == 56 && y == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

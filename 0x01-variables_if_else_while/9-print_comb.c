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

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (putchar(n) == 9)
			continue;
		putchar(',');
	}
	putchar('\n');
	return (0);
}

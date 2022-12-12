#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (n = 97; n <= 101; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

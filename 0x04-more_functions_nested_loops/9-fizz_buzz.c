#include "main.h"
#include <stdio.h>
/**
 * main - to print fizz buzz
 * Return: always 1
 */
int main(void)
{
	int i;
	int n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizz buzz");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("buzz");
		else
			printf("%d ", i);
		if (i != 100)
			printf(" ");
	}
	return (0);
}

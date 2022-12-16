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
			printf("FizzBuzz");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
		if (i != 100)
			printf(" ");
		if (i == 100)
			printf("\n");
	}
	return (0);
}

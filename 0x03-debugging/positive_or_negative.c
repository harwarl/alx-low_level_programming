#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - to check for positive and negative
 * @i: the variable to check
 * it is positive, negative, or zero.
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
	srand(time(0));
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

#include <stdio.h>
/**
 * main -To check if a number is positive, negative, or zero
 *
 * Return: 0
*/
int main(void)
{
	int number;
	if (number > 0)
			printf("%d is  positive\n", number);
	else if (number < 0)
		printf("%d is negative\n", number);
	else
		printf("%d is zero\n", number);
	return (0);
}

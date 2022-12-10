#include <stdio>
/*
 * main - To check if a number is positive, negative or Zero
 *
 * Return: 0
 */
int main(void)
{
	int number = 0;
	if (number > 0)
	{
		printf("%d is positive", number);
	}
	else if (number < 0)
	{
		printf("%d is negative", number);
	}
	else
	{
		printf("%d is zero", number);
	}
}

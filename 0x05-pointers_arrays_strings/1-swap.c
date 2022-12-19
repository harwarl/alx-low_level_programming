#include "main.h"
/**
 * swap_int - to swap integers
 * @a: first variable
 * @b: second variable
 * Return: swaped digit
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - to print an array
 * @a: the array
 * @n: number of elements to be printed
 * Return: the array elements
 */
void print_array(int *a, int n)
{
	int x;
	
	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}

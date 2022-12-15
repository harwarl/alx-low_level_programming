#include "main.h"
/**
 * print_to_98 - to print a number to 98
 * @num: number to print
 * Return: na una sabi
 */

void print_to_98(int num)
{
	int i, j, k;

	if (num > 98)
	{
		for (i = num; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				k = i % 100;
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');   
			}
			if (i == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (num < 98)
	{
		if (num < 0)
		{
			int j;
			num = num*-1;
			for (j = num; j >= 0; j--)
			{
				if (j == 0)
				{
					num = j;
					break;
				}
				_putchar('-');
				if (j > 9)
					_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		if (num >= 0)
		{
			for (j = num; j <= 98; j++)
			{
				if (j <= 9)
					_putchar(' ');
				else
					_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				if (j == 98)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}   
		}
	}
	else
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');   
	}
}

#include "main.h"

/**
* print_times_table - Prints @n times table
* @n: the number of times table
* Return: none
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n > 15 || n < 0)
		return;

	for (num = 0; num <= n; num++)
	{
		for (mult = 1; mult < 10; mult++)
		{
			prod = num * mult;

			if (prod < 99)
			{
				_putchar(prod / 100 + '0');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod > 9)
			{
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
				_putchar(prod + '0');

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

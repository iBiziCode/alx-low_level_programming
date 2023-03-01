#include <stdio.h>

/**
* main - Prints sum of multiples of 3 and 5
* Return: 0 for success
*/

int main(void)
{
	int total = 0, num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0)
			total += num;
		else if (num % 5 == 0)
			total += num;
	}
}

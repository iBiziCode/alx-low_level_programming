#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -  entry point
*Return: always 0 for success
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -  entry point
*Return: always 0 for success
*/
int main(void)
{
	int n  = 0;

	char c = 'a';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

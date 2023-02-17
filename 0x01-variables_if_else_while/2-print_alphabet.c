#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -  entry point
*Return: always 0 for success
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

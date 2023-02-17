#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -  entry point
*Return: always 0 for success
*/
int main(void)
{
	char low  = 'a';

	char upper = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}

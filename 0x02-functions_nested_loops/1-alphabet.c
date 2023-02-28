#include "main.h"

/**
* main - Entry point
* Return: always 0 for success
*/

void print_alphabets(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		_putchar(lowcase);

	_putchar('\n');
}

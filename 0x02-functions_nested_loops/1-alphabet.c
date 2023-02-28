#include "main.h"

/**
* print_alphabet - Prints lowcase alphabets
* Return: none
*/

void print_alphabet(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		_putchar(lowcase);

	_putchar('\n');
}

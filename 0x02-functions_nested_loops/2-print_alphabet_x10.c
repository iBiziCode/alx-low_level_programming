#include "main.h"

/**
* print_alphabet_x10 - Prints lowcase alphabets 10 times
* Return: none
*/

void print_alphabet_x10(void)
{
	char lowcase;

	for (int i = 0; i <= 10; i++)
	{
		for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
			_putchar(lowcase);

		_putchar('\n');
	}
}

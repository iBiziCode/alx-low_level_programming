#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @address: The address of the function to print the opcodes.
 * @bytes: The number of bytes to print.
 *
 * Return: Nothing.
 */
void print_opcodes(int (*address)(int, char **), const int bytes)
{
	int i;
	unsigned char *opcodes = (unsigned char *) address;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", opcodes[i]);

		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");
}

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(main, bytes);

	return (0);
}

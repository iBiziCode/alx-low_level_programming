#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Perform simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Invalid number of arguments\n");
		exit(1);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Invalid operation\n");
		exit(2);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("You can not divide by 0\n");
		exit(3);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

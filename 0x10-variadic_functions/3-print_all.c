#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	print_fn_t print_fn;
	const char *sep = "";
	unsigned int i = 0, j = 0;

	print_fns_t fns[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (fns[j].print_fn)
		{
			if (fns[j].type == format[i])
			{
				printf("%s", sep);
				print_fn = fns[j].print_fn;
				print_fn(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}

/**
 * print_char - prints a character
 * @args: arguments list
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @args: arguments list
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}

/**
 * print_float - prints a float
 * @args: arguments list
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - prints a string
 * @args: arguments list
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}


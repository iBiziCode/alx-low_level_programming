#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a func given as a param on each elem of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function you need to use
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

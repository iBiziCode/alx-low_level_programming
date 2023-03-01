#include "main.h"

/**
* _isLower - checks if character is lowercase
*@c: the character 
* Return: 1 if c is lower
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

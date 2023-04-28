#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - calculate length of a string
 * @s: a pointer to the string to find the length of
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	return (*s ? _strlen(s + 1) +  1 : 0);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

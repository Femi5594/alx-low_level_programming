#include "lists.h"

/**
 * add_node - adds news node
 * @head: param
 * @str: str param
 * Return: struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t len;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	n_node->len = len;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}

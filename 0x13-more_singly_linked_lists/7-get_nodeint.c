#include "lists.h"

/**
 * get_nodeint_at_index - node should be return inside linked list
 * @head:node one in the linked list
 * @index: index of the node should be returned
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int b = 0;

	listint_t *temp = head;
	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}
	return (temp ? temp : NULL);
}

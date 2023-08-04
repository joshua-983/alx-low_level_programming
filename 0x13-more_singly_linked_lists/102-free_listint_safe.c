#include "lists.h"

/**
 * free_listint_safe - linked list to be freed
 * @h: pointer pointint to the first node in linked list
 * Return: free list numbers
 */

size_t free_listint_safe(listint_t **h)

{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
	return (0);

	while (*h != NULL)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	count++;
	}
	*h = NULL;
	return (count);
}

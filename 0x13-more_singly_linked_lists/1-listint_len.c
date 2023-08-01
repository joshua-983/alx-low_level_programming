#include "lists.h"

/**
 * list_len - return link list numbers
 * @h: link list type
 * Return: nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t num = 0;
	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}

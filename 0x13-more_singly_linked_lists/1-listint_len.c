#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: we have to linked list listint_t to traverse the code.
 * Return: linked list numbers of node.
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

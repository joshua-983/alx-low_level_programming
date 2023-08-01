#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print elements of listint_t
 * @h:linked list
 *
 * Return: node
 */
 
 size_t print_listint(const listint_t *h)
{
	size_t ABC = 0;
		while (h)
		{
		printf("%d\n", h->n);
		h = h->next;
		ABC++;
		}
		return (ABC);
}

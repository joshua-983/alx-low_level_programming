#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t count = 0;
	const listint_t *forward, *backward;

	if (head == NULL)
		exit(98);
	forward = head;
	backward = head->next;

	while (forward != NULL)
	{
	printf("[%p] %d\n", (void *)forward, forward->n);
	count++;
	if (forward == backward)
	{
	printf("-> [%p] %d\n", (void *)backward, backward->n);
	break;
	}

	forward = forward->next;

	if (backward != NULL && backward->next != NULL)
	backward = backward->next;
	else
		backward = NULL;
	}

	return (count);
}

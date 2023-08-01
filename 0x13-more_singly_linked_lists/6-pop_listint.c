#include "lists.h"

/**
 * pop_listint - the head node of linked list must be deleted
 * @head: pointer points to the first element in the liked list
 * Return: deleted element inside the data
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
		int num;
	if (!head || !*head)
	return (0);
	num = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (num);
}


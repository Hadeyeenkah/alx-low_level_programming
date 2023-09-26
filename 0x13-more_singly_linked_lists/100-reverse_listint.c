#include "lists.h"

/**
 * reverse_listint - Reverses the order of a linked list.
 * @head: Pointer to the pointer to the first node in the list.
 *
 * This function reverses the order of
 * the linked list pointed to by 'head'.
 *
 * It iterates through the list,
 * reversing the direction of pointers between
 * nodes to change the order of elements.
 *
 * Return: A pointer to the new first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}


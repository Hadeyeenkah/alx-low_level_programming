#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * This function determines if a given linked list is looped
 * and calculates the number of unique nodes in it.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *Dock, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	Dock = head->next;
	hare = head->next->next;

	while (hare)
	{
		if (Dock == hare)
		{
			Dock = head;
			while (Dock != hare)
			{
				nodes++;
				Dock = Dock->next;
				hare = hare->next;
			}

			Dock = Dock->next;
			while (Dock != hare)
			{
				nodes++;
				Dock = Dock->next;
			}

			return (nodes);
		}

		Dock = Dock->next;
		hare = hare->next ? hare->next->next : NULL;
	}

	return (0);
}


/**
 * print_listint_safe - Prints a listint_t list safely.
 *
 * This function prints the elements of a listint_t list
 * without going into an infinite loop, even if the list is looped.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

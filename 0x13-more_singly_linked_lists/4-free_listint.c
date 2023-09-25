#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t nodes.
 * @head: Pointer to the head of the linked list.
 *
 * Description: This function frees each node in the linked list,
 * starting from the head, and then sets the head pointer to NULL.
 */

void free_listint(listint_t *head)
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

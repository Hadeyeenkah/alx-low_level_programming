#include "lists.h"


/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Pointer to the first element in the linked list.
 *
 * This function removes the first element (head) from the linked list,
 * frees the memory allocated for it, and returns the data contained in the
 * deleted node. If the list is empty, it returns 0.
 *
 * Return: The data inside the element that was deleted, or 0 if the list is empty.
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


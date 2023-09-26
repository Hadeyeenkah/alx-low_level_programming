#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list
 * at a specified index.
 * @head: Pointer to the pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * This function removes the node at the specified 'index' from the linked list
 * pointed to by 'head'. If the 'index' is 0,
 * it deletes the first node in the list.
 *
 * Return: 1 (Success) if the deletion is successful, or -1 (Failure) if:
 * The list is empty.
 * The 'index' is out of range (greater than the number of nodes).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}


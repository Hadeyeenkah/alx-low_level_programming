#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into a linked list at a specified position.
 * @head: Pointer to the pointer to the first node in the list.
 * @idx: The index at which the new node is to be inserted.
 * @n: The data to be stored in the new node.
 *
 * This function creates a new node with the given data 'n' and inserts it
 * at the specified 'idx' position in the linked list pointed to by 'head'.
 * If 'idx' is 0, the new node becomes the new head of the list.
 *
 * Return: If the insertion is successful, a pointer to the new node is returned.
 *         If memory allocation fails or 'idx' is out of range, it returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}


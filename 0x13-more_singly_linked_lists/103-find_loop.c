#include "lists.h"

/**
 * find_listint_loop - Finds the starting node
 * of a loop in a linked list.
 *
 * This function detects the presence
 * of a loop in a linked list and returns
 * the address of the node where the loop starts.
 * If there is no loop, it returns NULL.
 *
 * @head: A pointer to the head of the linked list to search.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if no loop is detected.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}


#include "lists.h"
/**
 *print_list - prints the list of items in a linked list
 *@h: the head of the linked list
 *
 *Return: the size of the node
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (!(h->str))
			printf("[%d] %s\n", h->len, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}

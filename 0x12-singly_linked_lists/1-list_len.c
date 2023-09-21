#include "lists.h"
/** *list_len - returns then number of elements in a list. 
 * *@y: singly linked list.
 *
 *Return: number of elements in the list.
 */
size_t list_len(const list_t *y)
{
	size_t bytes;
	bytes = 0;
	while (y != NULL)
	{
		y = y->next;
		bytes++;
	}
	return (bytes);
}

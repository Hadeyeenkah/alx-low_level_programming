/**
 * add_node - adds a new node at the beginning
 * of a list_t list. * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 * */

list_t *add_node(list_t **head, const char *str)
{
	list_t *odd;
	size_t nchar;
	odd = malloc(sizeof(list_t));
	if (odd == NULL)
		return (NULL);
	odd->str = strdup(str);
	for (nchar = 0;
			str[nchar]; nchar++);
	odd->len = nchar;
	odd->next = *head;
	*head = odd;
	return (*head);
}

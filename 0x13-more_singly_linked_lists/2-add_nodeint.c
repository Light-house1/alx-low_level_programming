#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint- Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = (listint_t *)malloc(sizeof(listint_t));

if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints a new node at the
 *                   end of a listint_t list.
 * @h: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h != 0)
{
printf("%i\n", h->n);
node++;
h = h->next;
}
return (node);
}

#include "sort.h"
/**
 * insertion_sort_list -  A function that sorts a doubly linked list
 * of integers in ascending order
 * @list: The list to be printed
 */

void insertion_sort_list(listint_t **list)
{
        listint_t *l;

	      if (list == NULL || (*list)->next == NULL)
		            return;
	      l = (*list)->next;
	      while (l)
	      {
		            while ((l->prev) && (l->prev->n > l->n))
		            {
			                  l = swap(l, list);
			                  print_list(*list);
		            }
		            l = l->next;
	      }
}
/**
 * swap - This program swaps node in a list
 * @first: The first node
 * @sec: the secobd node
 * Return: Pooiter to the node
 */
listint_t *swap(listint_t *first, listint_t **sec)
{
        listint_t *b = first->prev, *c = first;

	      b->next = c->next;
	      if (c->next)
		            c->next->prev = b;
	      c->next = b;
	      c->prev = b->prev;
	      b->prev = c;
	      if (c->prev)
		            c->prev->next = c;
	      else
		            *sec = c;
	      return (c);
}
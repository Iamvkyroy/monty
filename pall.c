#include "monty.h"
/**
 * f_pall - prints stack
 * @counter: empty
 * @head: head of stack
 * Return: 0
*/
void f_pall(stack_t **head, unsigned int counter)
{
(void)counter;
stack_t *h;

h = *head;
if (h == NULL)
return;
while (h)
{
h = h->next;
printf("%d\n", h->n);
}
}
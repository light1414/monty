#include "monty.h"
/**
  *f_rotl- it rotate the stack to the top
  *@head: the stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmpp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmpp->next != NULL)
	{
		tmpp = tmpp->next;
	}
	tmpp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmpp;
	(*head) = aux;
}

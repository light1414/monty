#include "monty.h"
/**
 * f_queue - It prnts the top
 * @head: the stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail stack
 * @nv: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int nv)
{
	stack_t *new_nod, *aux;

	aux = *head;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{
		printf("Error\n");
	}
	new_nod->n = nv;
	new_nod->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_nod;
		new_nod->prev = NULL;
	}
	else
	{
		aux->next = new_nod;
		new_nod->prev = aux;
	}
}

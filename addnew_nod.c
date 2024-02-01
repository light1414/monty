#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @nv: new_value
 * Return: no return
*/
void addnode(stack_t **head, int nv)
{

	stack_t *new_nod, *aux;

	aux = *head;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_nod;
	new_nod->n = nv;
	new_nod->next = *head;
	new_nod->prev = NULL;
	*head = new_nod;
}


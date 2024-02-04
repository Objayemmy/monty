#include "monty.h"

/**
<<<<<<< HEAD
 * f_queue - Sets the mode to queue (FIFO).
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @head: Pointer to the head of the stack.
 * @n: New value to be added.
 * Return: No return value.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (aux == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = new_node;
		new_node->prev = aux;
	}
=======
 * f_queue - Switches to queue mode
 * @head: stack head
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
 * addqueue - Adds a node to the tail of the stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
    stack_t *new_node, *aux;

    aux = *head;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (aux)
    {
        while (aux->next)
            aux = aux->next;
    }

    if (!aux)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        aux->next = new_node;
        new_node->prev = aux;
    }
>>>>>>> 9618fb0b90d57e11483fd9bb864e3c1a9509d20e
}

#include "monty.h"
<<<<<<< HEAD
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
=======

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, result;

	h = *head;

>>>>>>> 9618fb0b90d57e11483fd9bb864e3c1a9509d20e
	while (h)
	{
		h = h->next;
		len++;
	}
<<<<<<< HEAD
=======

>>>>>>> 9618fb0b90d57e11483fd9bb864e3c1a9509d20e
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
=======

	h = *head;
	result = h->next->n * h->n;
	h->next->n = result;
	*head = h->next;

>>>>>>> 9618fb0b90d57e11483fd9bb864e3c1a9509d20e
	free(h);
}

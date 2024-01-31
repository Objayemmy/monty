#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number (not used in this function).
 * Return: No return value.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current;

	(void)counter; /* Unused parameter */

	current = *head;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

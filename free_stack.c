#include "monty.h"
<<<<<<< HEAD

/**
 * free_stack - Frees a linked list.
 * @head: Head of the stack.
 */
void free_stack(stack_t *head)
{
	stack_t *current, *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
=======
/**
* free_stack - function that linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
>>>>>>> 9618fb0b90d57e11483fd9bb864e3c1a9509d20e
	}
}

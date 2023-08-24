#include "monty.h"

/**
 * pop - pops the current held stack (LIFO)
 * @stack: the stack it sees to pop
 * @line_number: line number
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_elem;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp_elem = (*stack)->next;
		free(*stack);
		(*stack) = temp_elem;
	}
}

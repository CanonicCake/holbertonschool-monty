#include "monty.h"

/**
 * swap - swaps elements possition
 * @stack: stack to see swappable variables
 * @line_number: Line Number to swap at
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	unsigned int swap;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swap = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swap;
}

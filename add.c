#include "monty.h"

/**
 *
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!temp || !temp->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n += temp->n;
	*stack = temp->next;
	(*stack)->prev = NULL;
	free(temp);
}

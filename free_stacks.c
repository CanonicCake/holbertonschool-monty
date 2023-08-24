#include "monty.h"

/**
 * free_stack - intended to free the current stack
 * @stack: stack to be freed at
 *
 * Return: void
 */

void free_stack(stack_t **stack)
{
	if (!stack || !(*stack))
		return;
	free_stack(&((*stack)->next));
	free(*stack);
	*stack = NULL;
}

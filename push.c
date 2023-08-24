#include "monty.h"

/**
 * push - pushes the line
 * @stack: stack
 * @line_number: line number
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *nline = NULL;

	nline = malloc(sizeof(stack_t));
	if (!nline)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	nline->prev = NULL;
	nline->n = number;
	if (*stack == NULL)
	{
		nline->next = NULL;
		*stack = nline;
	}
	else
	{
		nline->next = *stack;
		nline->next->prev = nline;
		*stack = nline;
	}
}

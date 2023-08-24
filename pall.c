#include "monty.h"

/**
 * pall - prints all values starting on the top
 * @stack: stack
 * @line_number: line number
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *line;
	(void)line_number;

	if (stack == NULL || *stack == NULL)
		return;
	line = *stack;
	while (line)
	{
		line = line->next;
		printf("%u", line->n);
	}
	printf("\n");
}

#include "monty.h"

/**
 * get_function - fetches the execuable monty
 * @opcode: opcode
 *
 * Return: void
 */

void (*get_function(char *opcode))(stack_t **, unsigned int)
{
	instruction_t op_code[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop}
	};
	
	int i = 0;

	while (op_code[i].opcode)
	{
		if (strcmp(opcode, op_code[i].opcode) == 0)
		{
			return (op_code[i].f);
		}
		i++;
	}
	if (!op_code[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", i, opcode);
		exit(EXIT_FAILURE);
	}
	return (0);
}

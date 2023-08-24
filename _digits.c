#include "monty.h"

/**
 * _digits - checks if it's a digit
 * @token: token
 * @line_number: line number
 *
 * Return: void
 */

void _digits(char **token, unsigned int line_number)
{
	size_t i;

	if (!token[1])
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	i = 0;
	while (i < strlen(token[1]))
	{
		i++;
		if (token[1][i] == '-' && i == 0)
		{
			i++;
		}
		if(isdigit(token[1][i] == 0))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
			return;
		}
	}
}

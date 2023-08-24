#include "monty.h"

/**
 * main - finds elements on the queue
 * @bytes_read - will read the bytes for the push
 *
 * Return: FIFO or LIFO
 */

int main(int argc, char *argv[])
{
	FILE *fd;
	char *buffer = NULL, **token = NULL;
	size_t length = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
	for (; getline(&buffer, &length, fd) != -1; line_number++)
	{
		token = token_string(buffer);
		if (token)
		{
			get_function(&stack, line_number);
			free(token);
		}
	}
	free(buffer);
	free(fd);
	free_stack(&stack);
	return (EXIT_SUCCESS);
}

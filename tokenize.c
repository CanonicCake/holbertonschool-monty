#include "monty.h"

/**
 * token_string - function to tokenize a string \t\n\r
 * @tok: token line
 *
 * Return: token string
 */

char **token_string(char *buffer)
{
	char **token_array, *token = NULL;
	int i = 3;
	char *delim = "\t\r\n";

	token = strtok(buffer, delim);
	if (!token)
		return (NULL);

	token_array = malloc(sizeof(char **) * 3);
	if (!token_array)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(buffer);
		exit(EXIT_FAILURE);
	}
	while (--i)
	{
		if (i < 3)
		{
			token_array[i] = token;
		}
		token = strtok(NULL, delim);
		i++;
	}
	token_array[2] = NULL;
	return (token_array);
}

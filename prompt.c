#include "Hell.h"

/**
 * read_the_line - this is funtion
 * Return: char*
 */

char *read_the_line(void)
{

	int i = 0;
	char *prompt = "Hell% ", *line = NULL;
	size_t len = 0;

	while (line[i] != '\n')
	{
		if (isatty(STDIN_FILENO) == 0)
			return (0);
		write(1, prompt, strlen(prompt));
		getline(&line, &len, stdin);
		i++;
	}
		if (line[0] == '\n')

		write(1, prompt, strlen(prompt));
		line = malloc(sizeof(char) * BUFF_SZ);
		i = getline(&line, &len, stdin);

		if (line == NULL)
		{
			perror("malloc");
			free(line);
			exit(EXIT_FAILURE);
		}

		if (i == -1)
		{
			free(line);
			return (0);
		}
		i++;
		return (0);
	}


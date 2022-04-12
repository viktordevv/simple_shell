#include "Hell.h"

/**
 * read_the_line - this is funtion
 * Return: char*
 */

char *read_the_line(void)
{
        char *prompt = "Hell% ", *line = NULL;
        size_t z = 0;
        int i = 0;

        if (isatty(STDIN_FILENO) == 0)
                return (NULL);
        printf("%s", prompt);
        line = malloc(sizeof(char) * BUFF_SZ);
        i = getline(&line, &z, stdin);

        if (line == NULL)
        {
                perror("malloc");
                free(line);
                exit(EXIT_FAILURE);
        }
        if (i == -1)
        {
                free(line);
                return (NULL);
        }
        return (line);
}

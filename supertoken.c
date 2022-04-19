#include "Hell.h"

/**
 * supertoken - this is funtion
 * @str: char
 * Return: char**
 */

char **supertoken(char *str)
{
	char **tk = NULL;
	char *spc = " \t\r\n";
	int tm = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	tm = cnt(str, " ");

	tk = malloc(sizeof(char *) * tm + 1);
	if (!tk)
	{
		free(tk);
		return (NULL);
	}
	tk[0] = strtok(str, spc);

	for (i = 1; i < tm; i++)
	{
		tk[i] = strtok(NULL, spc);
	}
	return (tk);
}
/**
 * cnt - this is funtion
 * @str: char
 * @limit: char
 * Return: wrd
 */
int cnt(char *str, char *limit)
{
	int wrd = 0;

	while (*str)

		if (*str == *limit || *str == '\n' || *str == '\t')
		{
			str++;
			continue;
		}
		else if	(*str != *limit)
		{
			wrd++;
			while (*str != *limit && *str != '\n' && *str != '\t')
			{
				str++;
			}
		}

	return (wrd);
}

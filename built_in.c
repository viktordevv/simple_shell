#include "Hell.h"

/**
 * _ptr_env - this is funtion
 * Return: char**
 */

int ptr_env(void)
{
	int x = 0;
	char a = '\n';

	while (hell_env[x] != NULL)
	{
		write(1, hell_env[x], (_strlen(hell_env[x] + 1)));
		write(1, &a, 1);
		x++;
	}

	return (0);
}

/**
 * exit_hell - this is funtion
 * Return: void
 */

int exit_hell(void)
{
	return (1);
}

/**
 * get_built - Get the built object
 * @comm: Command
 * @dirc: Directory
 * Return: char*
 */
char *get_built(char *comm, char *dirc)
{
	char s *;
	size_t a;
	int i = 0;

	if (comm == NULL || dirc == NULL)
	{
		return (NULL);
	}
	while (comm[i] != '\0')
	{
		if (comm[i] == '/')
		{
			s = comm;
			break;
		}
		i++;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	a = _strlen(s);
	if (a == 0)
	{
		return (NULL);
	}
	if (s[a - 1] == '/')
	{
		s[a - 1] = '\0';
	}
	return (s);
}

#include "Hell.h"
/**
 * find_command - this is funtion
 * @f: char
 * Return: 0
 */
int (*find_command(char *f))(void)
{
	int i = 0;

	commander_t bin[] = {
	    {"env", ptr_env},
	    {"exit", exit_hell},
	    {N, N}};

	while (bin[i].variable != NULL)
	{
		if (_strcomp(f, bin[i].variable, _strlen(bin[i].variable)) == 0)
		{
			return (bin[i].b);
		}
		i++;
	}
	return (NULL);
}

#include "Hell.h"

/**
 * env_get - Get the built object
 * @name: Command
 * Return: char*
 */

char *env_get(const char *name)
{
    int x = p = 0;
    char *value, *variable;
    p = _strlen((char *)name);

    for (;hell_env[x] != NULL; x++)
        {
        variable = _strtok(hell_env[x], "=");
        value = _strtok(NULL, "=");
        if (_strcomp(variable, name) == 0)
        {
            return (value);
        }
    }
        return (NULL);
}

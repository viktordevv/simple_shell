#include "Hell.h"

/**
 * env_get - Get the built object
 * @name: Command
 * Return: char*
 */

/* char *envget()
{
    char m[] = "PATH";

    syscall(__NR_write, STDOUT_FILENO, m, sizeof(m)-1);
    syscall(__NR_write, STDOUT_FILENO, "\n", 1);
    syscall(__NR_fsync, STDOUT_FILENO );

    return (N);
}
 */
/*     int x = 0;
    int p = _strlen((char *)name);
    char *value, *variable;

    for (;hell_env[x] != NULL; x++)
        {
        value = hell_env[x];
        variable = _charlocate(value, "=");

        if (_strcomp(variable, name) == 0)
        {
            return (value);
        }
    }
        return (NULL);
}


char *_charlocate(char *s, char c)
{
    int x;

    for (x = 0; s[x] != '\0'; x++)
    {
        if (s[x] == c)
            return (&s[x]);
    }
    return (0);
} */
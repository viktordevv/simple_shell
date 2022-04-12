#include "Hell.h"

/**
 * supertoken - this is funtion
 * @str:
 * Return: char**
 */

char **supertoken(char *str)
{
        if (str == NULL)
                break;

        while (str != NULL)
        {
                char **tokens = supertoken(str);
                int i = 0;
                while (tokens[i] != NULL)
                {
                        printf("%s\n", tokens[i]);
                        i++;
                }
                str = strtok(NULL, DELIM);
                return (token);
        }
}
/* if(str == NULL)
{
        printf("%s\n", str);
} */

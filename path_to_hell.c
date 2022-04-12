#include "Hell.h"

/**
 * dir_path - this is funtion
 * @path: char
 * Return: char*
 */

char *dir_path(char *path)
{
    char *dir = NULL;
    int i = 0;

    dir = malloc(sizeof(char) * BUFF_SZ);
    if (dir == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    while (path[i] != '\0')
    {
        if (path[i] == '/')
        {
            dir = path;
            break;
        }
        i++;
    }
    free(dir);
    return (dir);
}

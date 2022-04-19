#include "Hell.h"

/**
 * _strlen - this is funtion
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
        int c = 0;

        while (s[c])
                c++;

        return(c);
}

/**
 * _strcomp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1
 */
int _strcomp(char *path, char *match, size_t n)
{
        while (n && *path && (*path == *match))
        {
                ++path;
                ++match;
                --n;
        }
        if (n == 0)
        {
                return(1);
        }
        else
        {
                return(0);
        }
}

/* (char *s1, char *s2)
{
        int i = 0;

        while (s1[i] && s2[i] && s1[i] == s2[i])
                i++;

        return (s1[i] - s2[i]);
}
 */
/**
 * _strcopy - copies a string
 * @dest: destination
 * @src: source
 * Return: char*
 */
char *_strcopy(char *dest, char *src)
{
        int len;

        if (!src || !dest)
                perror("error");

        for (len = 0; src[len] != '\0'; len++)
        {
                dest[len] = src[len];
        }
        dest[len] = '\0';
        return(dest);
}

/**
 * _strcat - concatenates two strings
 * @conc1: string 1
 * @conc2: string 2
 * Return: char*
 */

char *_strcat(char *conc1, char *conc2)
{
        int p = 0;
        int j = 0;

        for (; conc1[p] != '\0'; p++)
                ;

        for (; conc2[j] != '\0'; j++)
                conc1[p + j] = conc2[j];
        conc1[p + j] = '\0';

        return(conc1);
}

void _itoa(long i, char *str)
{
        int p = 0, j = 0;

        j = i;
        for (p = 1; j > 10; j /= 10)
                p *= 10;

        for (; p > 0; p /= 10)
        {
                *str = '0' + i / p;
                str++;
                i %= p;
        }
        *str = '\0';
}
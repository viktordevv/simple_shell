#include "Hell.h"

int (*find_command(char *f))(void)
{
        int i = 0;

        commander_t bin[] = {
            {"env", ptr_env},
            {"exit", exit_hell},
            /*    {"cd", cd},
               {"echo", echo},
               {"supertoken", supertoken},
               {"pwd", pwd},
               {"help", help},
               {"history", history},
               {"forky", forky},
               {"built_in", built_in}, */
            {NULL, NULL}};

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

/*
            {"env", envget},
            {"exit", exit_hell},
            {N, N}};

        while (bin[i].variable != NULL)
        {
                if ((_strcomp(bin[i].variable)) == 0)
                {
                        return (bin[i].f);
                }
                i++;
        }
        return (0); */

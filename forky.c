#include "Hell.h"

int main(void)
{
        pid_t figlio;
        int a = WEXITSTATUS(figlio);
        char *args[2];

        figlio = fork();

        if (figlio > TRUE)
        {

                args[0] = "/bin/sh";
                args[1] = NULL;
                execve(args[0], args, NULL);
        }

        else if (figlio == FALSE)
        {
                return (1);
        }
        else
        {
                perror("fork");
                exit(1);
                return (a);
        }
        return (1);
}

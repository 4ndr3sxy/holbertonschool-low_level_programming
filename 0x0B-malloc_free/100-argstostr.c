#include "holberton.h"

char *argstostr(int ac, char **av)
{
    int i, j, k;
    char concatArgs[100];
    /*
    printf("%d\n",ac);
    printf("%s\n",*av);
    printf("%c\n",*av[0]);
    *av++;
    printf("%s\n",*av);
    printf("%c\n",*av[0]);
    */
   printf("|%c|",av[1][4]);
    for (i = 1; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            printf("-%c-",av[i][j]);
        }
        printf("\n");

        // printf("-%c-",*av[2]);
        // printf("-%c-",*av[3]);
        // printf("-%c-",*av[4]);
        
        /*
        for (j = 0; *av+j; j++)
        {
            if ((*av[j] >= 65 && *av[j] <= 90) || (*av[j] >= 97 && *av[j] <= 122))
            {
                concatArgs[k] = *av[j];
            }
            else{
                concatArgs[k] = '\n';
            }
            k++;   
        }
        */
    }

    /*
    char *newChain;
    int i;

    if (ac - 1 == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
    {
        *newChain = newChain + *av[ac];
    }
    return (newChain);    
    */
   return (NULL);
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
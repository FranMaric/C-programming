#include <stdio.h>
#include <string.h>

#define MAXNIZ 20

int mystrcmp(char *niz1, char *niz2)
{
    while (*niz1 == *niz2)
    {
        if (*niz1 == '\0' && *niz2 == '\0')
        {
            return 0;
        }
        niz1++;
        niz2++;
    }

    if (*niz1 > *niz2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    char niz1[MAXNIZ + 1];
    char niz2[MAXNIZ + 1];
    printf("1. niz > ");
    fgets(niz1, MAXNIZ + 1, stdin);
    printf("2. niz > ");
    fgets(niz2, MAXNIZ + 1, stdin);
    int rez = mystrcmp(niz1, niz2);
    if (rez == 0)
    {
        printf("nizovi su jednaki");
    }
    else if (rez > 0)
    {
        printf("1. niz je veci");
    }
    else
    {
        printf("2. niz je veci");
    }

    return 0;
}
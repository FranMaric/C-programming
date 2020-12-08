#include <stdio.h>

char flipCase(char c)
{
    if (sizeof(c) == 1)
    {
        if (c >= 65 && c <= 90)
        {
            c = c + 32;
        }
        else if (c >= 97 && c <= 122)
        {
            c = c - 32;
        }
    }
    return c;
}

int main(void)
{
    char niz[31];
    printf("Upisati niz > ");
    fgets(niz, 31, stdin);
    for (int i = 0; niz[i] != '\0' && niz[i] != '\n'; i++)
    {
        niz[i] = flipCase(niz[i]);
    }
    printf("Rezultat    > %s", niz);
    return 0;
}
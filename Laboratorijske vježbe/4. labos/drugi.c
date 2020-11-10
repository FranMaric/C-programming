#include <stdio.h>

int main(void)
{
    char niz1[51], niz2[5];

    printf("Upisite 1. niz > ");
    fgets(niz1, 51, stdin);
    printf("Upisite 2. niz > ");
    fgets(niz2, 6, stdin);

    for (int i = 0; niz1[i] != '\0' && niz1[i] != '\n'; i++)
    {
        if (niz1[i] == '\n')
            break;
        for (int j = 0; niz2[j] != '\0' && niz2[j] != '\n'; j++)
        {
            if (niz1[i] == niz2[j])
            {
                niz1[i] = niz1[i] + 32;
                break;
            }
        }
    }

    printf("Novi 1. niz = %s", niz1);

    return 0;
}
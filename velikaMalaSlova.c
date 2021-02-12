#include <stdio.h>

#define charLength 20

void function(int *pMalih, int *pVelikih)
{
    *pMalih = *pVelikih = 0;

    char niz[charLength];
    printf("Upisite niz > ");
    fgets(niz, charLength, stdin);

    for (int i = 0; niz[i] != '\0' && niz[i] != '\n'; i++)
    {
        if (niz[i] >= 'a' && niz[i] <= 'z')
        {
            ++*pMalih;
        }
        else if (niz[i] >= 'A' && niz[i] <= 'Z')
        {
            ++*pVelikih;
        }
    }
    return;
}

int main(void)
{
    int malihSlova, velikihSlova;
    function(&malihSlova, &velikihSlova);

    printf("Broj velikih slova: %d\n", malihSlova);
    printf("Broj malih slova: %d", velikihSlova);

    return 0;
}
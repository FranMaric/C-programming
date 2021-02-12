#include <stdio.h>

void uVelikaSlova(char *pNiz)
{
    for (int i = 0; *(pNiz + i) != '\0'; i++)
    {
        if (*(pNiz + i) >= 'a' && *(pNiz + i) <= 'z')
        {
            *(pNiz + i) += 'A' - 'a';
        }
    }
    return;
}

int main(void)
{
    char niz[] = "Ivana 123";

    uVelikaSlova(&niz[0]);
    printf("%s", niz);
    return 0;
}
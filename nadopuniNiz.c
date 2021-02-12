#include <stdio.h>

void nadopuniNiz(char *niz1, char *niz2)
{
    for (; *niz1 != '\0'; niz1++)
    {
    }
    for (; *niz2 != '\0'; niz2++)
    {
        *niz1 = *niz2;
        niz1++;
    }
    *niz1 = '\0';
    return;
}

int main(void)
{
    char niz1[37 + 1] = "Sadrzaj prvog niza";
    char niz2[] = "Sadrzaj drugog niza";

    nadopuniNiz(&niz1[0], &niz2[0]);

    printf("%s", niz1);

    return 0;
}
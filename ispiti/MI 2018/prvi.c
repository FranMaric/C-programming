#include <stdio.h>

int main(void)
{
    char ulazniNiz[21];
    char mSlova[20] = {0};
    char vSlova[20] = {0};

    int duljinaMslova = 0, duljinaVslova = 0;

    printf("Upisati niz > ");
    fgets(ulazniNiz, 21, stdin);

    for (int i = 0; ulazniNiz[i] != '\n' && ulazniNiz[i] != '\0'; i++)
    {
        if (96 < ulazniNiz[i] && ulazniNiz[i] < 123)
        {
            mSlova[duljinaMslova] = ulazniNiz[i];
            duljinaMslova++;
        }
        else if (65 <= ulazniNiz[i] && ulazniNiz[i] <= 90 || 48 <= ulazniNiz[i] && ulazniNiz[i] <= 57)
        {
            vSlova[duljinaVslova] = ulazniNiz[i];
            duljinaVslova++;
        }
    }

    printf("%d; %s\n", duljinaMslova, mSlova);
    printf("%d; %s", duljinaVslova, vSlova);

    return 0;
}
#include <stdio.h>

#define BR_STUP 4
#define BR_RED 3

void sumeRedaka(int *pPolje, int *pRez)
{
    int suma;
    for (int i; i < BR_RED; i++)
    {
        suma = 0;
        for (int j = 0; j < BR_STUP; j++)
        {
            suma += *(pPolje + j + i * BR_STUP);
        }
        *(pRez + i) = suma;
    }

    return;
}

int main(void)
{
    printf("Upisite clanove >\n");

    int polje[BR_RED][BR_STUP];
    int rez[BR_RED];

    for (int i = 0; i < BR_RED * BR_STUP; i++)
    {
        scanf("%d", &polje[(int)(i / BR_STUP)][i % BR_STUP]);
    }
    sumeRedaka(&polje[0][0], &rez[0]);

    printf("Sume redaka su:\n");

    for (int i = 0; i < BR_RED; i++)
    {
        printf("%d\n", *(&rez[0] + i));
    }

    return 0;
}
#include <stdio.h>
#define DIMENZIJA 10

int najveciClan1D(int *pPolje)
{
    int najveci;

    for (int i = 0; i < DIMENZIJA; i++)
    {
        if (i == 0 || *(pPolje + i) > najveci)
        {
            najveci = *(pPolje + i);
        }
    }
    return najveci;
}

int main(void)
{
    int polje[DIMENZIJA];

    printf("Unesi clanove > ");
    for (int i = 0; i < DIMENZIJA; i++)
    {
        scanf("%d", &polje[i]);
    }
    printf("Najveci clan je %d", najveciClan1D(&polje[0]));

    return 0;
}
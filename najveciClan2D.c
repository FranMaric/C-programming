#include <stdio.h>

int najveciClan2D(int *pPolje)
{
    int najveci;

    for (int i = 0; *(pPolje + i) != '\0'; i++)
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
    int polje[3][4] = {{2, 3, 5, 7},
                       {11, 13, 17, 19},
                       {23, 29, 31, 37}};

    printf("Najveci clan je %d", najveciClan2D(&polje[0][0]));

    return 0;
}
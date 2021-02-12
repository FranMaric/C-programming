#include <stdio.h>

void popuni(char *polje, int brRedaka, int brStupaca, int xStozer, int yStozer)
{
    for (int x = 0; x < brStupaca; x++)
    {
        for (int y = 0; y < brRedaka; y++)
        {
            if (x < xStozer && y < yStozer || x > xStozer && y > yStozer)
            {
                *(polje + x + y * brStupaca) = '#';
            }
            else
            {
                *(polje + x + y * brStupaca) = '-';
            }
        }
    }

    *(polje + xStozer + yStozer * brStupaca) = 'X';

    return;
}

int main(void)
{
    char polje[7][7];

    popuni(&polje[0][0], 7, 7, 4, 5);

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
            printf("%c", polje[i][j]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void gen2Dpolje(char *p)
{

    return;
}

int main(void)
{
    char polje[6][7];
    polje[3][4] = 'X';

    gen2Dpolje(&polje[0][0]);

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%c", polje[j][i]);
        }
        printf("\n");
    }
    return 0;
}
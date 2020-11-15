#include <stdio.h>

int main(void)
{
    float matrica[5][7] = {{},
                           {},
                           {31.1, 32.2, 33.3, 34.2},
                           {1.f, 4.f, 0, 0, 0, 0, 7.7},
                           {}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matrica[i][j] > 10 || matrica[i][j] < -10)
                printf(" %.1f", matrica[i][j]);
            else
                printf("  %.1f", matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
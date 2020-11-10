#include <stdio.h>

int main(void)
{
    int najveciRedak, najvecaSuma, n, m, suma;

    printf("Upisati m i n > ");
    scanf("%d %d", &m, &n);
    int matrica[m][n];
    printf("Upisati clanove >\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }

    for (int redak = 0; redak < m; redak++)
    {
        suma = 0;
        for (int i = 0; i < n; i++)
        {
            suma = suma + matrica[redak][i];
        }
        if (suma >= najvecaSuma)
        {
            najvecaSuma = suma;
            najveciRedak = redak;
        }
    }

    printf("Najveci redak:\n");
    for (int i = 0; i < n; i++)
    {
        printf("    %d", matrica[najveciRedak][i]);
    }

    return 0;
}
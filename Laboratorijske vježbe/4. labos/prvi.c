#include <stdio.h>

int main(void)
{
    int n;
    printf("Upisite dimenziju matrice > ");
    scanf("%d", &n);
    int matrica[n][n + 1];

    printf("Upisite elemente matrice > ");

    for (int i = 0; i < n * n; i++)
    {
        scanf("%d", &matrica[i / n][i % n]);
    }

    int zadnji_stupac;
    for (int i = 0; i < n; i++)
    {
        zadnji_stupac = 1;
        for (int j = 0; j < n; j++)
        {
            if (matrica[i][j] == 1)
            {
                if (zadnji_stupac == 0)
                {
                    zadnji_stupac = 1;
                }
                else
                {
                    zadnji_stupac = 0;
                }
            }
        }
        matrica[i][n] = zadnji_stupac;
    }

    printf("Nova matrica:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;
    printf("Upisite broj redaka/stupaca matrice > ");

    scanf("%d", &n);
    int matrica[n][n];

    printf("Upisite %dx%d clanova >\n", n, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }
    printf("Najvece vrijednosti stupaca su:\n");
    int najveci;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrica[j][i] > najveci || j == 0)
                najveci = matrica[j][i];
        }
        printf("%d ", najveci);
    }

    printf("\nNajvece vrijednosti redaka su:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrica[i][j] > najveci || j == 0)
                najveci = matrica[i][j];
        }
        printf("%d ", najveci);
    }

    return 0;
}
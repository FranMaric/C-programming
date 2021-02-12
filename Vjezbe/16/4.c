#include <stdio.h>

void zamijeni(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
    return;
}

double transpKvad(double *p, int n)
{
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            zamijeni(p, p);
    }
    return suma;
}

int main(void)
{
    int n;
    printf("Upisite red matrice > ");
    scanf("%d", &n);

    int matrica[n][n];

    printf("Upisite clanove >\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &matrica[j][i]);
    }
    transpKvad(&matrica[0][0], n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", matrica[j][i]);
        printf("\n");
    }

    return 0;
}
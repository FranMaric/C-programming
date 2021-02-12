#include <stdio.h>

int BrDjelitelja(int n)
{
    int broj = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            broj += 1;
        }
    }

    return broj;
}

void NajveciBrojDjelitelja(int m, int n, int *broj, int *djelitelj)
{
    int brDjelitelja;
    int broj, pom;

    for (int i = m; i < n + 1; i++)
    {
        pom = BrDjelitelja(i);
        if (i == m || pom > brDjelitelja)
        {
            broj = i;
            brDjelitelja = pom;
        }
    }

    *broj = broj;
    *djelitelj = brDjelitelja;
}

int main(void)
{
    int broj, djelitelja;
    NajveciBrojDjelitelja(10, 30, &broj, &djelitelja);
    printf("%d %d", broj, djelitelja);
    return 0;
}
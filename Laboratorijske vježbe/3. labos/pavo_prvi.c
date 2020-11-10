#include <stdio.h>

int main(void)
{
    int n;
    printf("Upisite broj N > ");
    scanf("%d", &n);

    int ulaz[n][n];

    printf("Upisite %dx%d clanova >\n", n, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ulaz[i][j]);
        }
    }

    printf("Ispis:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%d ", ulaz[i][j]);
        }
        for (int j = i + 1; j < n; j++)
        {
            printf("%d ", ulaz[j][i]);
        }
    }

    return 0;
}
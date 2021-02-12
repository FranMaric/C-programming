#include <stdio.h>

int main(void)
{
    int n;
    printf("Upisite broj clanova polja > ");
    scanf("%d", &n);

    int ulaz[n];
    int izlaz[n];

    for (int i = 0; i < n; i++)
    {
        printf("Upisite %d. broj > ", i + 1);
        scanf("%d", &ulaz[i]);
        izlaz[i] = 1;
    }
    printf("ulaz:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", ulaz[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= ulaz[i]; j++)
        {
            izlaz[i] = izlaz[i] * j;
        }
    }

    printf("\nizlaz:");
    for (int i = 0; i < n; i++)
    {
        printf("%d! = %d\n", ulaz[i], izlaz[i]);
    }

    return 0;
}
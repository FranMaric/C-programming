#include <stdio.h>

int main(void)
{
    int n;
    printf("Upisite broj N > ");
    scanf("%d", &n);

    float niz[n];
    printf("Upisite realne brojeve (%d) > ", n);
    for (int i = 0; i < n; i++)
        scanf("%f", &niz[i]);

    //Sortiranje
    int has_swapped = 1;
    float temp;
    while (has_swapped == 1)
    {
        has_swapped = 0;
        for (int i = 1; i < n; i++)
        {
            if (niz[i - 1] > niz[i])
            {
                temp = niz[i - 1];
                niz[i - 1] = niz[i];
                niz[i] = temp;
                has_swapped = 1;
            }
        }
    }

    printf("Najveci = ");
    for (int i = n - 1; i > n - 6; i--)
        printf("%.1f ", niz[i]);

    printf("\nNajmanji = ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", niz[i]);
    return 0;
}
#include <stdio.h>

int main(void)
{
    char ulaz[10];
    char rijec[10];

    printf("Upisite 10 znakova > ");
    scanf("%s", &ulaz);

    for (int i = 0; i < 10; i++)
    {
        rijec[i] = ulaz[i];
    }

    int has_swapped = 1, temp;
    while (has_swapped == 1)
    {
        has_swapped = 0;
        for (int i = 1; i < 10; i++)
        {
            if (rijec[i - 1] > rijec[i])
            {
                temp = rijec[i - 1];
                rijec[i - 1] = rijec[i];
                rijec[i] = temp;
                has_swapped = 1;
            }
        }
    }

    printf("Original: %s", ulaz);
    printf("\nSortirani: %s", rijec);

    return 0;
}
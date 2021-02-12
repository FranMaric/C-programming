#include <stdio.h>

int main(void)
{
    int znamenke[10] = {0};
    int negativnih = 0;
    int ulaz;

    while (1)
    {
        printf("Upisati broj > ");
        scanf("%d", &ulaz);

        if (ulaz == 0)
        {
            break;
        }

        negativnih = negativnih + (ulaz < 0);
        ulaz = ulaz - 2 * ulaz * (ulaz < 0);

        while (ulaz > 0)
        {
            znamenke[ulaz % 10]++;
            ulaz = ulaz / 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Znamenka %d:   %d puta\n", i, znamenke[i]);
    }
    printf("Negativni :   %d puta", negativnih);

    return 0;
}
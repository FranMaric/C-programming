#include <stdio.h>

int main(void)
{
    int broj;
    int duljina = 0;
    int dijeljivi[20] = {0};

    while (5)
    {
        printf("Upisati broj > ");
        scanf("%d", &broj);

        if (broj != 0 && broj > 0)
        {
            for (int i = 1; i < 20; i++)
            {
                if (broj % (i + 1) == 0)
                {
                    dijeljivi[i]++;
                }
            }
            duljina++;
        }
        else
            break;
    }

    printf("Rezultat:");
    for (int i = 1; i < 20; i++)
    {
        if (dijeljivi[i] / (duljina * 1.0f) >= 0.5f)
        {
            printf(" %d", i + 1);
        }
    }

    return 0;
}
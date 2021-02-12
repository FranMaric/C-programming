#include <stdio.h>

int main(void)
{

    struct osoba
    {
        int maticni_broj;
        int godina_rodenja;
    };
    int n;

    printf("Upisite broj osoba > ");
    scanf("%d", &n);

    struct osoba osobe[n];

    for (int i = 0; i < n; i++)
    {
        printf("%3d. osoba > ", i + 1);
        scanf("%d %d", &osobe[i].maticni_broj, &osobe[i].godina_rodenja);
    }

    int sorted = 0;
    struct osoba temp;

    while (!sorted)
    {
        sorted = 1;
        for (int i = 1; i < n; i++)
        {
            if (osobe[i - 1].godina_rodenja > osobe[i].godina_rodenja)
            {
                temp = osobe[i];
                osobe[i] = osobe[i - 1];
                osobe[i - 1] = temp;
                sorted = 0;
            }
        }
    }

    sorted = 0;
    int start = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (osobe[i].godina_rodenja != osobe[i + 1].godina_rodenja || i == n - 2)
        {
            if (i - start > 0)
            {
                sorted = 0;
                while (!sorted)
                {
                    sorted = 1;
                    if (i == n - 2)
                        i++;

                    for (int j = start; j < i; j++)
                    {
                        if (osobe[j].maticni_broj > osobe[j + 1].maticni_broj)
                        {
                            temp = osobe[j];
                            osobe[j] = osobe[j + 1];
                            osobe[j + 1] = temp;
                            sorted = 0;
                        }
                    }
                }
            }
            start = i + 1;
        }
    }

    printf("\n");

    start = 0;
    for (int i = 0; i < n; i++)
    {
        if (osobe[i].godina_rodenja != osobe[i + 1].godina_rodenja || i == n - 1)
        {
            printf("%d. godina\n", osobe[i].godina_rodenja);

            for (int j = start; j < i + 1; j++)
            {
                printf("%9d\n", osobe[j].maticni_broj);
            }
            start = i + 1;
        }
    }

    return 0;
}
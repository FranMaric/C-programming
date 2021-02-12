#include <stdio.h>

int main(void)
{

    int racun[1001] = {0};
    int counter[1001] = {0};

    int broj_racuna, uplata;

    int run = 1;

    printf("Upisati uplate\n");
    while (run)
    {
        scanf("%d %d", &broj_racuna, &uplata);
        broj_racuna = broj_racuna - 100000;
        racun[broj_racuna] = racun[broj_racuna] + uplata;
        counter[broj_racuna] = counter[broj_racuna] + 1;

        if (counter[broj_racuna] == 3)
        {
            run = 0;
        }
    }

    int maxSuma;
    for (int i = 0; i < 1001; i++)
    {
        if (racun[i] > maxSuma || i == 0)
        {
            maxSuma = racun[i];
        }
    }
    printf("Najveca suma: %d", maxSuma);

    return 0;
}
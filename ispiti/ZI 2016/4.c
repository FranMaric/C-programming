#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void umetniClan(float *polje, int n, float x)
{
    if (*(polje + n - 1) > x)
        return;

    for (int i = 0; i < n; i++)
    {
        if (*(polje + i) < x)
        {
            for (int j = n - 1; j > i; j--)
            {
                *(polje + j) = *(polje + j - 1);
            }

            *(polje + i) = x;
            break;
        }
    }

    return;
}

int main(void)
{
    srand((unsigned int)time(NULL));

    float randFloat;
    float polje[5] = {0.};

    for (int i = 0; i < 10; i++)
    {
        randFloat = (float)rand() / RAND_MAX * 9.99;
        printf("Ubacujem %.2f: ", randFloat);

        umetniClan(&polje[0], 5, randFloat);

        for (int j = 0; j < 5; j++)
        {
            printf(" %.2f ", polje[j]);
        }
        printf("\n");
    }

    return 0;
}
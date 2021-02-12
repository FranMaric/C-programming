#include <stdio.h>

void ispisiStupacMaksimuma(int *polje, int brRedaka, int brStupaca)
{
    int maksimum;
    int indexMaksimuma;

    for (int i = 0; i < brRedaka; i++)
    {

        for (int j = 0; j < brStupaca; j++)
        {
            if (*(polje + j + i * brStupaca) > maksimum || j == 0)
            {
                maksimum = *(polje + j + i * brStupaca);
                indexMaksimuma = j;
            }
        }
        printf("%d\n", indexMaksimuma + 1);
    }

    return;
}

int main(void)
{
    int polje[3][3] = {{2, 15, 15},
                       {-1, 3, 2},
                       {14, 10, 108}};

    ispisiStupacMaksimuma(&polje[0][0], 3, 3);

    return 0;
}
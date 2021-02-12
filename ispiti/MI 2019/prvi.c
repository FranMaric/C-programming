#include <stdio.h>

int main(void)
{
    char nizA[41];
    char nizB[41];
    char izlaz[41] = {0};

    printf("niz A > ");
    fgets(nizA, 41, stdin);
    printf("niz B > ");
    fgets(nizB, 41, stdin);

    int brojac, duljinaIzlaza = 0;

    for (int i = 0; nizA[i] != '\0' && nizA[i] != '\n'; i++)
    {
        brojac = 0;
        for (int j = 0; nizB[j] != '\0' && nizB[j] != '\n'; j++)
        {
            if (nizA[i] == nizB[j])
            {
                brojac++;
                if (brojac == 3)
                {
                    izlaz[duljinaIzlaza] = nizB[j];
                    duljinaIzlaza++;
                    break;
                }
            }
        }
    }

    printf("izlaz > %s", izlaz);

    return 0;
}
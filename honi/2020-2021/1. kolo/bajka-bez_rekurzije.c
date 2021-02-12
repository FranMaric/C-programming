#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int duljina_strasne, duljina_sretne;

    scanf("%d %d", &duljina_strasne, &duljina_sretne);

    char strasna[duljina_strasne];
    char sretna[duljina_sretne];

    scanf("%s", &strasna);
    scanf("%s", &sretna);

    //Indeks prvog elementa
    int lok = -1;
    for (int i = 0; i < duljina_strasne; i++)
    {
        if (strasna[i] == sretna[0])
        {
            lok = i;
            break;
        }
    }
    if (lok == -1)
    {
        printf("-1");
        return 0;
    }

    int duljina = 0, nema_rjesenja, i = 1;

    while (i < duljina_sretne)
    {
        if (strasna[lok + 1] == sretna[i] && lok + 1 < duljina_strasne)
        {
            lok++;
            duljina++;
            i++;
        }
        else if (strasna[lok - 1] == sretna[i] && lok > 0)
        {
            lok--;
            duljina++;
            i++;
        }
        else //Pronađi isto slovo negdje drugdje u strasnoj rijeci
        {
            nema_rjesenja = 1;
            for (int j = 0; j < duljina_strasne; j++)
            {
                if (strasna[j] == strasna[lok] && (strasna[j - 1] == sretna[i] && j > 0 || strasna[j + 1] == sretna[i] && j + 1 < duljina_strasne))
                {
                    duljina = duljina + abs(lok - j);
                    lok = j;
                    nema_rjesenja = 0;
                    break;
                }
            }
            if (nema_rjesenja == 1)
            {
                printf("-1");
                return 0;
            }
        }
    }

    printf("%d", duljina);

    return 0;
}
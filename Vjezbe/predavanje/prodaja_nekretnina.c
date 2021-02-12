#include <stdio.h>
#include <math.h>

int main(void)
{

    struct nekretnina
    {
        int sifra_oglasa;
        int cijena;
        int povrsina;
    };

    int n;

    printf("Upisite broj oglasa > ");
    scanf("%d", &n);

    struct nekretnina nekretnine[n];

    for (int i = 0; i < n; i++)
    {
        printf(" %d. oglas > ", i + 1);
        scanf("%d %d %d", &nekretnine[i].sifra_oglasa, &nekretnine[i].cijena, &nekretnine[i].povrsina);
    }

    int sorted = 0;
    struct nekretnina temp;

    while (!sorted)
    {
        sorted = 1;
        for (int i = 1; i < n; i++)
        {
            if (nekretnine[i - 1].cijena < nekretnine[i].cijena)
            {
                temp = nekretnine[i];
                nekretnine[i] = nekretnine[i - 1];
                nekretnine[i - 1] = temp;
                sorted = 0;
            }
        }
    }

    int start = 0;
    for (int k = 1; k < n; k++)
    {
        if (nekretnine[k - 1].cijena != nekretnine[k].cijena || k == n - 1)
        {

            if (k - start > 1)
            {
                sorted = 0;
                while (!sorted)
                {
                    sorted = 1;

                    if (k == n - 1)
                    {
                        k++;
                    }

                    for (int i = start + 1; i < k; i++)
                    {
                        if (nekretnine[i - 1].povrsina < nekretnine[i].povrsina)
                        {
                            temp = nekretnine[i];
                            nekretnine[i] = nekretnine[i - 1];
                            nekretnine[i - 1] = temp;
                            sorted = 0;
                        }
                    }
                }
            }

            start = k;
        }
    }

    start = 0;
    for (int k = 1; k < n; k++)
    {
        if (nekretnine[k - 1].povrsina != nekretnine[k].povrsina || k == n - 1)
        {

            if (k - start > 1)
            {
                sorted = 0;
                while (!sorted)
                {
                    sorted = 1;

                    if (k == n - 1)
                    {
                        k++;
                    }

                    for (int i = start + 1; i < k; i++)
                    {
                        if (nekretnine[i - 1].sifra_oglasa > nekretnine[i].sifra_oglasa)
                        {
                            temp = nekretnine[i];
                            nekretnine[i] = nekretnine[i - 1];
                            nekretnine[i - 1] = temp;
                            sorted = 0;
                        }
                    }
                }
            }

            start = k;
        }
    }

    //Output printing
    printf("\n");

    int duljina_cijene;
    int duljina_povrsine;
    int duljina_sifre;

    for (int i = 0; i < n; i++)
    {
        if ((int)log10(nekretnine[i].cijena) + 1 > duljina_cijene || i == 0)
        {
            duljina_cijene = (int)log10(nekretnine[i].cijena) + 1;
        }

        if ((int)log10(nekretnine[i].povrsina) + 1 > duljina_povrsine || i == 0)
        {
            duljina_povrsine = (int)log10(nekretnine[i].povrsina) + 1;
        }

        if ((int)log10(nekretnine[i].sifra_oglasa) + 1 > duljina_sifre || i == 0)
        {
            duljina_sifre = (int)log10(nekretnine[i].sifra_oglasa) + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%10d EUR  %6d m2   %6d\n", nekretnine[i].cijena, nekretnine[i].povrsina, nekretnine[i].sifra_oglasa);
    }

    return 0;
}
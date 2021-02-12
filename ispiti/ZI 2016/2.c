#include <stdio.h>
#include <string.h>

char zamjenaZnakova(char *s1, char *s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

char *traziSamoglas(char *niz)
{
    return strpbrk(niz, "aeiouAEIOU");
}

int main(void)
{
    char niz[81];
    printf("Upisite niz: ");
    fgets(niz, 81, stdin);

    char *prviSamoglasnik = traziSamoglas(niz);
    char *drugiSamoglasnik = traziSamoglas(prviSamoglasnik + 1);

    if (prviSamoglasnik != NULL && drugiSamoglasnik != NULL)
    {
        zamjenaZnakova(prviSamoglasnik, drugiSamoglasnik);

        printf("Rezultat je: %s", niz);
    }
    else
        printf("Nema dovoljno samoglasnika");

    return 0;
}
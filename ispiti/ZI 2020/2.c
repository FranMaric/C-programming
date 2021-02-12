#include <stdio.h>

char *traziZnak(int n, char *niz1, char *niz2)
{
    int counter;
    for (int k = 0; *(niz1 + k) != '\0'; k++)
    {
        counter = 0;
        for (int i = 0; *(niz2 + i) != '\0'; i++)
        {
            if (*(niz2 + i) == *(niz1 + k))
                counter++;

            if (counter == n)
            {
                return niz1 + k;
            }
        }
    }
    return NULL;
}

int main(void)
{
    char niz1[41];

    char niz2[] = "BbaacacBacBc";
    printf("Upisite niz > ");
    fgets(niz1, 41, stdin);

    char *p = traziZnak(3, niz1, niz2);

    if (p != NULL)
        printf("Rjesenje %c", *p);
    else
        printf("Nema takvog znaka");

    return 0;
}
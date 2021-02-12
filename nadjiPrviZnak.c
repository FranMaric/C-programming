#include <stdio.h>

char *nadjiPrviZnak(char *pNiz, char znak)
{
    for (int i = 0; *(pNiz + i) != '\0' && *(pNiz + i) != '\n'; i++)
    {
        if (*(pNiz + i) == znak)
        {
            return pNiz + i;
        }
    }
    return NULL;
}

int main(void)
{
    char niz[51];
    printf("Upisite niz  > ");

    fgets(niz, 50 + 1, stdin);

    char znak;
    printf("Upisite znak > ");
    scanf("%c", &znak);

    char *pPrviZnak = nadjiPrviZnak(&niz[0], znak);

    if (pPrviZnak == NULL)
    {
        printf("Znak %c ne postoji u nizu.", znak);
    }
    else
    {
        // for (char *p = pPrviZnak; *p != '\n' && *p != '\0'; p++)
        // {
        //     printf("%c", *p);
        // }
        printf("%s", pPrviZnak);
    }

    return 0;
}
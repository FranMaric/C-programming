#include <stdio.h>
#include <string.h>

int brojiZnamenke(char *niz)
{
    int i = 0, znamenki = 0;
    while (*(niz + i) != '\0')
    {
        if (*(niz + i) >= '0' && *(niz + i) <= '9')
        {
            znamenki++;
        }
        i++;
    }
    return znamenki;
}

int main(void)
{
    char niz[] = "ab8c";
    printf("%d", brojiZnamenke("abc789"));
    return 0;
}
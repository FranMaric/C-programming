#include <stdio.h>

int main(void)
{
    char niz[1000] = "abcdefgh";

    int index, duljina = 8;
    char c;

    while (1)
    {

        scanf("%d %c", &index, &c);
        if (index > duljina || index < 0)
        {
            break;
        }
        for (int i = 1000; i > index; i--)
        {
            *(&niz[0] + i) = *(&niz[0] + i - 1);
        }
        *(&niz[0] + index) = c;

        printf("\n%s\n", niz);
        duljina++;
    }

    return 0;
}
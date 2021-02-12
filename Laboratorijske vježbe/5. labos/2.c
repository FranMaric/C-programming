#include <stdio.h>

int maksimum(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return n1;
    }
    else if (n2 > n3)
    {
        return n2;
    }

    return n3;
}

int main(void)
{
    int n1, n2, n3;

    while (1)
    {
        printf("Upisite tri prirodna broja > ");
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 > 100 || n1 < 0 || n2 > 100 || n2 < 0 || n3 > 100 || n3 < 0)
        {
            break;
        }

        printf("Najveci broj od %d %d %d je %d.\n", n1, n2, n3, maksimum(n1, n2, n3));
    }
    return 0;
}
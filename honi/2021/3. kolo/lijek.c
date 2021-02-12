#include <stdio.h>

int main(void)
{
    int n, n1, n2, n3, najveciUmnozak = 0;
    scanf("%d", &n);

    for (int i = n - 2; i > 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            if (i * j * (n - i - j) >= najveciUmnozak)
            {
                najveciUmnozak = i * j * (n - i - j);
                n1 = i;
                n2 = j;
                n3 = n - i - j;
            }
        }
    }

    printf("%d %d %d", n1, n2, n3);

    return 0;
}
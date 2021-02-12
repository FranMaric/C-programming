#include <stdio.h>

void zamijeni(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    x = 69;
    y = 100;
    zamijeni(&x, &y);

    printf("%d %d", x, y);

    return 0;
}
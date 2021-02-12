#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d\n%d", &x, &y);

    float z = (y - x) / 2.f;

    if ((int)z == z)
    {
        printf("ISTINA");
    }
    else
    {
        printf("LAZ");
    }
    return 0;
}
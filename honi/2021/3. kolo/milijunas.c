#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    if (x < 5)
        printf("0");
    else if (x < 10)
        printf("1000");
    else if (x < 15)
        printf("32000");
    else
        printf("1000000");

    return 0;
}
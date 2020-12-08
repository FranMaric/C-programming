#include <stdio.h>
int main(void)
{
    printf("\\");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (c % a == 0 && c % b == 0)
    {
        printf("DA");
    }
    else
    {
        printf("NE");
    }

    return 0;
}
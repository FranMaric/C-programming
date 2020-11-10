#include <stdio.h>

int main(void)
{
    int najveciDjelitelj = 0;

    int a, b, najveci;
    printf("Unesite dva broja > ");

    scanf("%d %d", &a, &b);

    if (a > b)
        najveci = a;
    else
        najveci = b;

    for (int i = najveci; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            najveciDjelitelj = i;
            break;
        }
    }
    printf("%d", najveciDjelitelj);
    return 0;
}
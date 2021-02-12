#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Unesite duljine stranica > ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Trokut nije moguc.");
    }
    else if (a != b && a != c && b != c)
    {
        printf("Trokut je raznostranican.");
    }
    else if (a == b && b == c && a == c)
    {
        printf("Trokut je jednakostranican.");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Trokut je jednakokracan.");
    }
}
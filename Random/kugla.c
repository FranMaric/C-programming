#include <stdio.h>

int main(void)
{
    float radius, volumen;
    printf("Upišite radijus kugle >");
    scanf("%f", &radius);

    if (radius > 0)
    {
        volumen = 4 / 3 * 3.1415 * radius * radius * radius;
        printf("Volumen je %f", volumen);
    }
    else
    {
        printf("Radijus mora biti pozitivan!!!");
    }

    return 0;
}
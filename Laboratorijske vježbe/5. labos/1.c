#include <stdio.h>
#include <math.h>

float PiSuma(int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            suma += 1.f / (1.f + 2.f * i);
        else
            suma -= 1.f / (1.f + 2.f * i);
    }
    suma *= 4;
    return suma;
}

float Povrsina(float d, int n)
{
    return d * 0.5 * d * 0.5 * PiSuma(n);
}

int main(void)
{
    int n;
    float d;
    printf("Upisite broj clanova reda > ");
    scanf("%d", &n);
    printf("Upisite promjer kruznice > ");
    scanf("%f", &d);

    if (n > 100 || n < 1 || d > 100 || d < 1)
    {
        printf("Ucitani parametri nisu dobri!\n");
    }
    else
    {
        float povrsinaReda = Povrsina(d, n);
        float povrsinaASin = d * 0.5 * d * asin(1.0);

        printf("Povrsina kruznice (PI pomocu reda) > %.3f\n", povrsinaReda);
        printf("Povrsina kruznice (PI pomocu asin) > %.3f\n", povrsinaASin);
        printf("Apsolutna razlika > %.3f\n", fabsf(povrsinaASin - povrsinaReda));
    }
    return 0;
}
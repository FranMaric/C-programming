#include <stdio.h>
#include <math.h>

float PiSuma(int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            suma -= 1.f / (1.f + 2.f * i);
        else
            suma += 1.f / (1.f + 2.f * i);
    }
    suma *= 4;
    return suma;
}

float Povrsina(float d, int n)
{
    float pi = PiSuma(n);
    float povrsina = d * 0.5 * d * 0.5 * pi;

    return povrsina;
}

int main(void)
{
    float d;
    int n;

    printf("Upisite broj clanova reda > ");
    scanf("%d", &n);

    printf("Upisite promjer kruznice > ");
    scanf("%f", &d);

    if (n > 100 || n < 1 || d > 100 || d < 1)
    {
        printf("Ucitani parametri nisu dobri!\n");
        return 0;
    }

    float pReda = Povrsina(d, n);
    float pASin = d * 0.5 * d * 0.5 * asin(1.0) * 2;

    printf("Povrsina kruznice (PI pomocu reda) > %.3f\n", pReda);
    printf("Povrsina kruznice (PI pomocu asin) > %.3f\n", pASin);
    printf("Apsolutna razlika > %.3f\n", fabs(pASin - pReda));

    return 0;
}
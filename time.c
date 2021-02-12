#include <stdio.h>
#include <time.h>

void vrijeme(int *dana, int *sati, int *minuta, int *sekundi)
{
    time_t sec = time(NULL);

    *dana = sec / (24 * 60 * 60);
    sec -= *dana * 24 * 60 * 60;

    *sati = sec / (60 * 60);
    sec -= *sati * 60 * 60;

    *minuta = sec / 60;
    sec -= *minuta * 60;

    *sekundi = sec;

    return;
}

int main(void)
{
    int dana, sati, minuta, sekundi;
    vrijeme(&dana, &sati, &minuta, &sekundi);
    printf("Od 00:00:00-1.1.1970(UTC) proteklo je:\n Dana:%d\n Sati:%d\n Minuta:%d\n Sekundi:%d", dana, sati, minuta, sekundi);
    return 0;
}
#include "stdio.h"
#include <math.h>

int main(void)
{
    float alvoX, alvoY, raioAlvo;
    float tiroX, tiroY, raioTiro;
    // leitura do alvo e tiro
    scanf("%f%f%f\n", &alvoX, &alvoY, &raioAlvo);
    scanf("%f%f%f", &tiroX, &tiroY, &raioTiro);
    // calcula a distancia do alvo e tiro
    float distancia = sqrt((alvoX - tiroX) * (alvoX - tiroX) + (alvoY - tiroY) * (alvoY - tiroY));
    if (distancia <= (raioAlvo + raioTiro))
    {
        printf("ACERTOU\n");
    }
    else
    {
        printf("ERROU\n");
    }

    return 0;
}
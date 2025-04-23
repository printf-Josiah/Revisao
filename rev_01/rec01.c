#include "stdio.h"
#include "math.h"

typedef struct
{
    float x, y, raio;
} tAlvoTiro;

int main()
{
    tAlvoTiro alvo, tiro;
    scanf("%f %f %f\n", &alvo.x, &alvo.y, &alvo.raio);
    scanf("%f %f %f", &tiro.x, &tiro.y, &tiro.raio);

    float distancia = sqrt((alvo.x - tiro.x) * (alvo.x - tiro.x) + (alvo.y - tiro.y) * (alvo.y - tiro.y));

    if (distancia <= (alvo.raio + tiro.raio))
    {
        printf("ACERTOU\n");
    }
    else
    {
        printf("ERROU\n");
    }

    return 0;
}
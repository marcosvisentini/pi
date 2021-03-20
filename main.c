#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#define RAIO 1
#define DISTANCIA 0.0000000001

bool ponto_acertou_o_circulo(void)
{
    double x = drand48();
    double y = drand48();
    double distancia_da_origem = sqrt((x * x) + (y * y));

    return (distancia_da_origem < RAIO);
}

int main(void)
{
    srand48(time(NULL));
    
    double pi;

    // Número total de pontos
    long int ntp = 0;

    // Número de pontos que "acertaram" o círculo
    long int npac = 0;
    
    bool aproximou_distancia = false;

    do {
        if (ponto_acertou_o_circulo()) npac++;

        ntp++;

        pi = ((double)4 * (double)npac / (double)ntp);
        aproximou_distancia = ((pi > (M_PI - DISTANCIA)) && (pi < (M_PI + DISTANCIA)));
    } while (!aproximou_distancia);

    printf("\nForam necessários %ld pontos para chegar a menos de %.10f de\n", ntp, DISTANCIA);
    printf("distância do valor de π obtido através da constante \"M_PI\".\n");
    printf("\nO valor final de π estimado foi %.10lf.\n\n", pi);
   
    return 0;
}
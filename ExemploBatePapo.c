#include <stdio.h>
/*
As regras de negócio do programa estão erradas
*/
//Declaração global de constantes e tipos;

#define PI 3.14;

typedef struct{
    double x;
    double y;
} tPonto;

typedef struct{
    tPonto centro;
    double raio;
}tCirculo;

int main()
{
    tCirculo c;
    
    c.centro.x = 1;
    c.centro.y = 2;
    c.raio = 56;
    printf("Coordenadas do ponto central (%.2lf,%.2lf)\n",c.centro.x,c.centro.y);

    printf("Raio do tCirculo = %.2lf\n",c.raio);
    return 0;
}

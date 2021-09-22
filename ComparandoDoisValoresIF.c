/*

Autor: Matheus Menecucci
Data de Criação: 15/09/2021

Objetivo: Comparar 2 números reais e decobrir qual é o maior valor

*/
#include <stdio.h>

int main()
{
    //Declarações Locais
    double n1, n2;
    double maior;
    
    
    //Leitura dos dados
    printf("Digite o valor do primeiro número ");
    scanf("%lf",&n1);
    
    printf("Digite o valor do segundo número ");
    scanf("%lf",&n2);
    
    
    //Descoberta do amior números
    if(n1>n2){
        maior = n1;
    }
    else{
        maior = n2;
    }
    
    //Imprimindo para o usuário
    printf("Maior número = %lf",maior);

    return 0;
}

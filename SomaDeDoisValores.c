/*

Autor: Matheus Menecucci
RA: 800310
Data de criação: 10/09/2021

Objetivo: Calcular a nota média

*/
#include <stdio.h>

int main()
{
    
     //Declarações de variaveis
    int A;
    int B;
    int x;
    
    //Leitura de dados
    printf("Insira um valor inteiro: ");
    scanf("%d",&A);
    
    printf("Insira um segundo valor inteiro: ");
    scanf("%d",&B);
    
    //soma da variaveis
    x = A + B;
    
    //Escrita dos dados
    printf("X = %d\n",x);

    return 0;
}

/*

Autor: Matheus Menecucci
Data de Criação: 15/09/2021

Objetivo:Classificar a idade de uma pessoa.
        bebe possui 0 anos
        Criança possui 1 a 9 anos.

*/
#include <stdio.h>

int main()
{
    //Declarações Locais
    int idade;
    
    //Leitura de dados
    printf("Digite o valor a idade ");
    scanf("%d", &idade);
    
    //Menu - escolha
    //escolha o caso se a op for igual ao número do  caso
    switch(idade){
        case 0:
            printf("Bebe\n");
            break;//comando obigatório para cada case
        //intervalo de caso 1 ao 9
        //caso 1:
        //caso 2:
        //...
        //caso 9:
        case 1 ... 9:
            printf("Criança");
            break;
        default:    
            printf("Uma outra classificação");
        
    }
      
    
    //Finalização do programa

    return 0;
}


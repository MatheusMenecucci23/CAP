/*

Autor: Matheus Menecucci
Data de Criação: 15/09/2021

Objetivo: Fazer um menu de escolha de opções para operações em banco de dados

*/
#include <stdio.h>

int main()
{
    //Declarações Locais
    int op; // opção que será escolhida
    
    //Leitura de dados
    printf("Digite o valor da opcao [1 a 5]: ");
    scanf("%d", &op);
    
    //Menu - escolha
    //escolha o caso se a op for igual ao número do  caso
    switch(op){
        case 1:
            printf("A opareção escolhida foi a Leitura de dados\n");
            break;//comando obigatório para cada case
        case 2:
            printf("A opareção escolhida foi a Escritia de dados\n");
            break;
        case 3:
            printf("A opareção escolhida foi a ALteração de dadosn\n");
            break;
        case 4:
            printf("A opareção escolhida foi a Busca de dados\n");
            break;
        case 5:
            printf("A opareção escolhida foi a Indexao de dados\n");
            break;
        default:    
            printf("Uma outra operacao");
        
    }
      
    
    //Finalização do programa

    return 0;
}

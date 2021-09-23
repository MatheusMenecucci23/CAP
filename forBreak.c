/*

Autor: Matheus Menecucci
Data 23/03/2021

//Objetivo: Dentre 3 números verificar se existe um número par 

*/
#include <stdio.h>


int main()
{
    //declaração de variável
    int n, achoupar , i;
   
    //fazendo a verificação para descobrir o maior número até quando o usuário quiser
    for(i=0; i<3; i++){
        printf("Insira um número: ");
        scanf("%d",&n);
        if(n % 2 == 0){
            achoupar = 1;
            //break só para o laço;
            break;
        }
    }
    if (achoupar == 0){
        printf("Não existe número par");
    }
    else{
         printf("Existe número par");
    }
    
   
    //Imprimindo para o usuário
   

    return 0;
}

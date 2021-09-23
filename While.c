/*

Autor: Matheus Menecucci
Data 23/03/2021

//objetivo verificar qual valor inseridos pelo usuário é o maior 

*/
#include <stdio.h>
#include <string.h>

int main()
{
    //declaração de variável
    int n, maior, i;
    char resp[3];
    
    //Inicializando a variável
    i = 0;
    printf("Deseja inserir um número? Digite sim ou não ");
    scanf("%s",resp);
   
    //fazendo a verificação para descobrir o maior número até quando o usuário quiser
    while(strcmp(resp,"s") == 0||strcmp(resp,"s") == 0){
        printf("Digite um número: ");
        scanf("%d",&n);
        //quando o algoritmo ler um número e ler um caracter é preciso colocar fflush
        fflush(stdin);
        if(i == 0){
            maior = n;
            i++;
        }else{
            if(maior<n){
                maior = n;
            }
        }
        printf("Deseja continuar? Digite sim ou não ");
        scanf("%s",resp);
    }
    
    //Imprimindo para o usuário
    printf("%d", maior);

    return 0;
}

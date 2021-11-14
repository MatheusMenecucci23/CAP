/*
Matheus Menecucci
RA:800310
Data: 21/10/2021
Objetivo: entender a declaração e o acesso dos vetores
*/

//Incluindo bibliotecas
#include <stdio.h>

int main()
{
    //criando um vetor inteiro
    int vetor[5];

    //Atribuindo valores nas respectivas posições
    vetor[0] = 10;
    vetor[1] = 7;

    //Atribuindo valores scanf
    printf("Posição dois do vetor:");
    scanf(" %d", &vetor[2]);


    //criando e atribuindo valores
    int vet[3] = {1,5,6};

    //criando um vetor de tamanho flexivel
    int vet2[] = {0,12,5};



    int vetor2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &vetor2[i]);
    };


    //imprindo o conteúdo das posição do vetor
    for (int i = 0; i < 5; i++)
    {
        printf("%d",vetor2[i]);
    }


    //descobrindo o tamanho do vetor que o usuário deseja
    int tamanho;
    printf("\nTamanho: ");
    scanf("%d",&tamanho);
    int vetor3[tamanho];
    
}

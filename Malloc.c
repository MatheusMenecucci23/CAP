//exemplo de alocação dinâmica de um vetor usando a função malloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    //criando um espação em memória de 50 * tamanho do inteiro
    p = (int *) malloc(50*sizeof(int));//alocando dinamicamente espaço para 50 inteiros
     
    if(p==NULL){// se houve erro na alocação
        printf("Erro: Memória insuficiente");
        exit(1);
    }
    
    for(i=0;i<50;i++){
        printf("Valor da posição %d: ",i+1);
        scanf("%d",&p[i]);
    }
    return 0;

}

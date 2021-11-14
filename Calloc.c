//exemplo de alocação dinâmica de um vetor usando a função calloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    //calloc cria as posições a inicializa com 0;
    //criando um array de 50 inteiros, onde cada posição tem 4 byte (int)
    p = (int *) calloc(50, sizeof(int));//alocando dinamicamente espeço para 50 inteiros
     
    if(p==NULL){// se houve erro na alocação
        printf("Erro: Memória insuficiente");
        exit(1);
    }
    
    for(i=0;i<50;i++){
        printf("Valor da posição %d: ",i+1);
        scanf("%d",&p[i]);
    }
    //liberando a memória
    free(p);
    return 0;

}

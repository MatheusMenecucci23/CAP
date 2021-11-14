//exemplo de alocação dinâmica de um vetor usando a função malloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    p = (int *) malloc(20*sizeof(int));//alocando dinamicamente espeço para 20 inteiros
     
    if(p==NULL){// se houve erro na alocação
        printf("Erro: Memória insuficiente");
        exit(1);
    }
    
    for(i=0;i<20;i++){
     p[i]=i+1;
    }
    
    for(i=0;i<20;i++){
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;

}

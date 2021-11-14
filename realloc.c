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
        printf("Valor da posição %d: ",i+1);
        scanf("%d",&p[i]);
    }
    
    //Diminui o tamanho do array 3 posições
    //realloc(variável que deseja realocar, o tamanho que deseja realocar)
    p=realloc(p,3*sizeof(int));
    for(i=0;i<3;i++){
        printf("%d\n",p[i]);
    }
    //Aumenta o tamanho do array em 40 posições
    p=realloc(p,40*sizeof(int));
    if(p==NULL){
        printf("Erro: Memória insuficiente!");
        exit(1);
    }
    for(i=0;i<40;i++){
        printf("%d\n",p[i]);
    }
    return 0;

}

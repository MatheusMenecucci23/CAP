#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int **p;//** = 2 niveis = 2 dimensões
    int i,j, N=2;
    //criando um array de ponteiros(int*)
    p = int(**) malloc(N* sizeof(int *));
    for(i=0;i<N;i++){
        //criando um array de int, logo criando uma matriz
        p[i] = (int *) malloc(N* sizeof(int));
        for(j=0;j<N;j++){
            //lendo a matriz de inteiros
            scanf("%d",&p[i][j]);
        }
    }
    
    //liberando a memória de uma matriz
    for(i=0;i<N;i++){
        //liberando a memória de todas as colunas
        free(p[i];)
    }
    free(p);
    return 0;
}


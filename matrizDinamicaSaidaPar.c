#include <stdio.h>
#include <stdlib.h>

void preenche_matriz(int ordem,int** mat){
    for(int i = 0; i<ordem;i++){
        for(int j =0;j<ordem;j++){
            if(i==0 && j==0){
                mat[0][0] = 1;
            }else if(i==0){
                mat[i][j]=mat[i][j-1]*2;
            }else{
                mat[i][j]=mat[i-1][j]*2;
            }
        }
    }
}



void imprimir(int ordem,int** mat){
    for(int i = 0; i<ordem;i++){
        for(int j =0;j<ordem;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}



int** criaMatriz(int ordem){
    
    int** matriz;
    
    matriz = (int**) calloc(ordem, sizeof(int*));
    
    if (matriz == NULL)
    {
        printf("Erro durante a alocação de memória");
        exit(1);
    }
    
    for(int i=0;i<ordem;i++){
        matriz[i] = (int *) calloc(ordem, sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro durante a alocação de memória");
            exit(1);
        }
    }
    return matriz;
    
}

void liberaMemoria(int** M, int lin){
    int i;
    for (i = 0; i < lin; i++)
    {
        free(M[i]);
    }
    free(M);
}

int main(void) {
    int n;
    int** tabela;
    do{
        printf("Insira a ordem da matriz ");
        scanf("%d",&n);
       
        tabela = criaMatriz(n);
        
        preenche_matriz(n,tabela);
        
        imprimir(n,tabela);
    }while(n != 0);
    liberaMemoria(tabela,n);
    return 0;

}


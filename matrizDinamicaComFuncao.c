#include <stdio.h>
#include <stdlib.h>

void preenche_matriz(int linhas, int colunas,int** mat){
    for(int i = 0; i<linhas;i++){
        for(int j =0;j<colunas;j++){
            mat[i][j] = rand()%10;
        }
    }
}



void imprimir(int linhas, int colunas,int** mat){
    for(int i = 0; i<linhas;i++){
        for(int j =0;j<colunas;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}



int verificar(int linhas, int colunas,int** mat,int valor){
    for(int i = 0; i<linhas;i++){
        for(int j =0;j<colunas;j++){
            if(valor==mat[i][j]){
                return 1;
            }
        }
    }
    return 0;

}
int** criaMatriz(int linhas,int colunas){
    
    int** matriz;
    
    matriz = (int**) calloc(linhas, sizeof(int*));
    
    if (matriz == NULL)
    {
        printf("Erro durante a alocação de memória");
        exit(1);
    }
    
    for(int i=0;i<linhas;i++){
        matriz[i] = (int *) calloc(colunas, sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro durante a alocação de memória");
            exit(1);
        }
    }
    return matriz;
    
}


int main(void) {

    int linhas,colunas,valor;
    int** tabela;
    do{
        printf("Insira o numero de linhas ");
        scanf("%d",&linhas);
        if(linhas ==-1){
            break;
        }
        
        printf("Insira o numero de colunas ");
        scanf("%d",&colunas);
        if(colunas ==-1){
            break;
        }
        
        tabela = criaMatriz(linhas,colunas);
        preenche_matriz(linhas,colunas,tabela);
        imprimir(linhas,colunas,tabela);
        
    
        printf("Insira um número: ");
        scanf("%d",&valor);
    
        if(verificar(linhas,colunas,tabela,valor)){
            printf("valor existe na matriz\n");
        }else{
            printf("Valor não existe\n");
        }
    }while(valor != -1 && linhas != -1 && colunas !=-1);

    return 0;

}


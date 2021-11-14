/*
Matheus Menecucci
RA:800310
*/
#include <stdio.h>

/*Lendo a matriz*/
void leia_matriz(int tamanho,int mat[][tamanho]){
    for(int i=0;i<tamanho;i++){
        for( int j=0;j<tamanho;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

//somando a linha
int soma_linha(int tamanho,int mat[][tamanho], int valor_referencia ){
    int soma_linha = 0;
    for(int i=0;i<tamanho;i++){
        soma_linha = 0;
        for(int j=0;j<tamanho;j++){
           soma_linha += mat[i][j];
        }
        if(soma_linha!=valor_referencia){
            return 0;
        }
    }
    return 1;
}
/*somando colunas*/
int soma_coluna(int tamanho,int mat[][tamanho],int valor_referencia){
    int soma_coluna;
    for(int i=0;i<tamanho;i++){
        soma_coluna = 0;
        for(int j=0;j<tamanho;j++){
           soma_coluna += mat[j][i];
        }
        if(soma_coluna!=valor_referencia){
            return 0;
        }
    }
    return 1;
}

/*somanda a diagonal principal*/
int soma_diagonal_principal(int tamanho,int mat[][tamanho],int valor_referencia){
    int soma_diagonal_principal = 0;
    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho;j++){
            if(i == j){
                 soma_diagonal_principal += mat[i][j];
            }
        }
    }
    if(soma_diagonal_principal!=valor_referencia){
        return 0;
    }
    return 1;
    
}
/*somando a diagonal secundaria*/
int soma_diagonal_secundaria(int tamanho,int mat[][tamanho],int valor_referencia){
    int soma_diagonal_secundaria = 0;
    for(int i=0;i<tamanho;i++){
        soma_diagonal_secundaria += mat[i][tamanho-1-i];
    }
    if(soma_diagonal_secundaria!=valor_referencia){
        return 0;
    }
    return 1;

}

/*verificando os casos*/
int verificacoes(int tamanho,int mat[][tamanho],int valor_referencia){
    if(soma_linha(tamanho,mat,valor_referencia)!=1){
        return 0;
    }
    if(soma_coluna(tamanho,mat,valor_referencia)!=1){
  
        return 0;
    }
    if(soma_diagonal_principal(tamanho,mat,valor_referencia)!=1){
 
        return 0;
    }
    if(soma_diagonal_secundaria(tamanho,mat,valor_referencia)!=1){
        return 0;
    }
    return 1;
}

int main()
{
    int tamanho;
    scanf("%d",&tamanho);

    int mat[tamanho][tamanho];
    
    //criando um valor de referencia de acordo com a fórmula dada
    int valor_referencia;
    valor_referencia = (tamanho*(tamanho*tamanho + 1))/2;
    
    //lendo a matriz
    leia_matriz(tamanho,mat);
 
    //verificando se todas propriedades são de um Quadrado mágico
    if(verificacoes(tamanho,mat,valor_referencia) == 1){
        printf("valido");
    }else{
        printf("invalido");
    }
    
    return 0;
    

}
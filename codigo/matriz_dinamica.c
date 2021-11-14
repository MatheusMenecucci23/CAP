/*
  Exemplo de passagem de uma matriz
  de tamanho logico dinamico como
  parametro para uma funcao

  Input: nao ha
  Output: os valores da matriz na
	tela (valores atribuidos
	arbitrariamente)
*/
#include <stdio.h>
#include <assert.h>
#define DIMENSAO 100

// prototipos
void preencha_matriz(double[][DIMENSAO], int, int);
void escreva_matriz(double[][DIMENSAO], int, int);

//
// programa principal
//
int main(void){
	double mat[DIMENSAO][DIMENSAO];

	// dimensao efetiva da matriz
	int linhas, colunas;
	scanf("%d%d", &linhas, &colunas);
	assert(linhas <= DIMENSAO && colunas <= DIMENSAO);

	preencha_matriz(mat, linhas, colunas);
	escreva_matriz(mat, linhas, colunas);

	return 0;
}


// implementacao das funcoes


// preencha_matriz: preenche a matriz com
//	valores arbitrarios, apenas para
//	ilustracao
// Input: a referencia para uma matriz de
//	DIMENSAO^2 como parametro, e o numero
//	de linhas e colunas em uso efetivo
// Output: a matriz referenciada preenchida
//	com valores exemplo, por referencia
void preencha_matriz(double matriz[][DIMENSAO],
	    int linhas, int colunas){
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = i + (double)j/100;
}


// escreva_matriz: apresenta a matriz 
//	na tela, formatando 
// Input: uma referencia para uma matriz de
//	DIMENSAO^2 como parametro, e o numero
//	de linhas e colunas em uso efetivo
// Output: os dados da matriz na tela
void escreva_matriz(double matriz[][DIMENSAO],
	    int linhas, int colunas){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++)
			printf("%05.2lf ", matriz[i][j]);
		printf("\n");
	}
}

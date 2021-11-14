/*
  Exemplo de passagem de uma matriz
  alocada em tempo de execucao (runtime)
  como parametro para uma funcao

  Input: nao ha
  Output: os valores da matriz na
	tela (valores atribuidos
	arbitrariamente)
*/
#include <stdio.h>
#include <assert.h>

// prototipos
void preencha_matriz(int, int, double[][*]);
void escreva_matriz(int, int, double[][*]);

//
// programa principal
//
int main(void){
	// dimensoes
	int linhas, colunas;
	scanf("%d%d", &linhas, &colunas);

	// matriz
	double mat[linhas][colunas];

	preencha_matriz(linhas, colunas, mat);
	escreva_matriz(linhas, colunas, mat);

	return 0;
}


// implementacao das funcoes


// preencha_matriz: preenche a matriz com
//	valores arbitrarios, apenas para
//	ilustracao
// Input: numero de linhas, numero de colunas,
//	e a referencia para uma matriz de
//	tamanho alocado dinamicamente (ou nao)
// Output: a matriz referenciada preenchida
//	com valores exemplo, por referencia
void preencha_matriz(int linhas, int colunas,
	    double matriz[][colunas]){
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = i + (double)j/100;
}


// escreva_matriz: apresenta a matriz 
//	na tela, formatando 
// Input: numero de linhas, numero de colunas
//	e uma referencia para uma matriz de
//	tamanho alocado dinamicamente (ou nao)
//	de linhas e colunas
// Output: os dados da matriz na tela
void escreva_matriz(int linhas, int colunas,
	    double matriz[][colunas]){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++)
			printf("%05.2lf ", matriz[i][j]);
		printf("\n");
	}
}

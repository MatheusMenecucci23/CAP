/*
  Exemplo de passagem de uma matriz
  de tamanho fixo como parametro
  para uma funcao

  Input: nao ha
  Output: os valores da matriz na
	tela (valores atribuidos
	arbitrariamente)
*/
#include <stdio.h>
#define LINHAS 20
#define COLUNAS 10

// prototipos
void preencha_matriz(double[][COLUNAS]);
void escreva_matriz(double[][COLUNAS]);

//
// programa principal
//
int main(void){
	double mat[LINHAS][COLUNAS];

	preencha_matriz(mat);
	escreva_matriz(mat);

	return 0;
}


// implementacao das funcoes


// preencha_matriz: preenche a matriz com
//	valores arbitrarios, apenas para
//	ilustracao
// Input: a referencia para uma matriz com
//	COLUNAS colunas como parametro
// Output: a matriz referenciada preenchida
//	com valores exemplo, por referencia
void preencha_matriz(double matriz[][COLUNAS]){
	for(int i = 0; i < LINHAS; i++)
		for(int j = 0; j < COLUNAS; j++)
			matriz[i][j] = i + (double)j/100;
}


// escreva_matriz: apresenta a matriz 
//	na tela, formatando 
// Input: uma referencia para uma matriz
//	com COLUNA colunas como parametro
// Output: os dados da matriz na tela
void escreva_matriz(double matriz[][COLUNAS]){
	for(int i = 0; i < LINHAS; i++){
		for(int j = 0; j < COLUNAS; j++)
			printf("%05.2lf ", matriz[i][j]);
		printf("\n");
	}
}

/*
  Este codigo faz calcula a media
	de uma colecao de 10.000
	valores de pesos de bagagem
	e apresenta a porcentagem
	das ocorrencias de pesos
	maiores ou iguais a essa
	media

  Input: 10.000 amostras de peso de
	bagagens de mao
  Output: a media e a porcentagem
	das ocorrencias de pesos
	maiores ou iguais a essa
	media (porcentagem de 0 a 1)

  Jander Moreira, 2020
*/
#include <stdio.h>

#define NUMERO_AMOSTRAS 10

// prototipos
void leia_pesos(double[]);
double calcule_media(const double[]);
int conte_maior_igual(const double[], double);

// programa principal
int main(void){
	double pesos[NUMERO_AMOSTRAS];

	leia_pesos(pesos);
	double media = calcule_media(pesos);
	int quant_maior_igual =
		conte_maior_igual(pesos, media);

	printf("Media: %g; porcentagem: %g\n",
		media,
		(double)quant_maior_igual/NUMERO_AMOSTRAS);

	return 0;
}


// sub-rotinas

// leia_pesos(): leitura da entrada
//	padrao de NUMERO_AMOSTRAS amostras
//	de peso
// Input: colecao de NUMERO_AMOSTRAS amostras
//	reais na entrada padrao
// Output: o vetor pesos preenchido
//	com as amostras, por referencia
void leia_pesos(double pesos[]){
	for(int i = 0; i < NUMERO_AMOSTRAS; i++)
		scanf("%lf", &pesos[i]);
}

// calcule_media(): retorna a media
//	de NUMERO_AMOSTRAS amostras
// Input: vetor de double com NUMERO_AMOSTRAS
//	amostras
// Output: a media dos valores do
//	vetor no retorno da funcao
double calcule_media(const double dados[]){

	double soma = 0;
	for(int i = 0; i < NUMERO_AMOSTRAS; i++)
		soma += dados[i];

	return soma/NUMERO_AMOSTRAS; // media
}

// conte_maior_igual(): retorna a quantidade
//	de ocorrencias em um vetor
//	de valores maiores ou iguais
//	a um valor de referencia
// Input: um vetor dados de double com
//	NUMERO_AMOSTRAS valores e um valor_base
//	para comparacao
// Output: o numero de ocorrencias no
//	vetor dados de valores maiores
//	ou iguais a valor_base
int conte_maior_igual(const double dados[], double valor_base){
	int contador = 0;	
	for(int i = 0; i < NUMERO_AMOSTRAS; i++)
		if(dados[i] >= valor_base)
			contador++;

	return contador;
}
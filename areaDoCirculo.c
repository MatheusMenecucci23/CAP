/*

Autor: Matheus Menecucci
Data de criação: 09/09/2021

Objetivo: Calcular a área de um círculo;

*/

#include <stdio.h>
#include <math.h>


//Declarações globais

//#define PI 3.14159265359;
//definindo uma variável global que é imutável

int main(){
    // Declarações Locais
    //declarando variáveis mutáveis;
    float raio;
    double area ;
    
    //uma variável constante que não muda
    const float PI = 3.14159265359;
    
    //Leitura de Dados
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    //Calculo da áre do circulo
    area = PI *pow(raio,2);
    
     
    
}
/*

Autor: Matheus Menecucci
RA: 800310
Data de criação: 09/09/2021

Objetivo: Calcular a nota média

*/

#include <stdio.h>

int main()
{
    //Declarações de variaveis
    float Nota1;
    float Nota2;
    float Nota3;
    float NotaMedia;
    
    //Leitura de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &Nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &Nota3);
    
    
    
    
    //Cáculo da NOta média
    NotaMedia = (Nota1+Nota2+Nota3)/3;
    
    //Escrita do Resultado
    printf("Nota media é igual a: %.2f",NotaMedia);

    return 0;
}

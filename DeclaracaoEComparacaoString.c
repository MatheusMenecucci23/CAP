/*

Autor: Matheus Menecucci
Data: 18/09/2021

*/#include <stdio.h>
#include <string.h>
 
int main() {
 
    //declarando variáveis locais
    // declarando um vetor do tipo char com capacidade para 20 caracteres
    char palavra1[20], palavra2[20], palavra3[20];
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);
    
    //fazando a comparação entre strings
    //strcmp faz a comparção do primeiro parametro com a string do segundo parametro
    //se as palavras forem iguais strcmp retorna valor 0 
    if (strcmp(palavra1,"vertebrado") == 0) 
        if (strcmp(palavra2,"ave") == 0) 
            if (strcmp(palavra3,"carnivoro") == 0) 
                printf("aguia\n");
            else
                printf("pomba\n");
        else
            if (strcmp(palavra3,"onivoro") == 0) 
                printf("homem\n");
            else
                printf("vaca\n");
                
    else
        if (strcmp(palavra2,"inseto") == 0) 
            if (strcmp(palavra3,"hematofago") == 0) 
                printf("pulga\n");
            else
                printf("lagarta\n");
        else
            if (strcmp(palavra3,"hematofago") == 0) 
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
    return 0;
}

/*

Autor: Matheus Menecucci
RA: 800310
Data de criação: 10/09/2021

Objetivo: Calcular o tempo em horas, minutos e segundos

*/
#include <stdio.h>
#include <math.h>

int main()
{
     //Declarações de variaveis
    int duracao;
    int h;
    int m;
    int s;
   
    
    //Leitura de dados
    scanf("%d",&duracao);
   
   
   //Transformando os segundos em horas, minutos e segundos
    h = duracao/3600;
    m = (duracao - h*3600)/60;
    s =(duracao - h*3600 - m*60);
  
   
    //Escrita dos dados
    printf("%d:%d:%d\n",h,m,s);
    
    return 0;
}

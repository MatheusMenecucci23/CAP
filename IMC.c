/*
Autor: Matheus Menecucci
Data: 09/09/2021

Objetivo: Calcular o IMC


*/

#include <stdio.h>		//biblioteca padrC#o de entrada e saC-da

int
main ()
{
    
  // DeclaraC'C5es locais
  double peso;
  double altura;
  double IMC;

  // Leitura de Dados
  printf ("Digite o peso: ");
  scanf ("%lf", &peso);

  //printf ("peso = %.2f", peso);

  printf ("Digite uma altura: ");
  scanf ("%lf", &altura);

  //printf ("altura = %.2f", altura);
  
  // Calculo do IMC
  
  IMC = peso/(altura*altura);


  // Escrita do Resultado
  printf("IMC = %f\n", IMC);//\n pula linha
  printf ("Hello World");
  

  return 0;
  
}

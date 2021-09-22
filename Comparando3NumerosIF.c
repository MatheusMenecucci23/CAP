/*

Autor: Matheus Menecucci
Data de Criacão: 15/09/2021

Objetivo: Comparar 3 números reais e decobrir qual é o maior valor

*/
#include <stdio.h>

int
main ()
{
  //Declarações Locais
  double n1, n2,n3;
  double maior;


  //Leitura dos dados
  printf ("Digite o valor do primeiro número ");
  scanf ("%lf", &n1);

  printf ("Digite o valor do segundo número ");
  scanf ("%lf", &n2);

  printf ("Digite o valor do terceiro nC:mero ");
  scanf ("%lf", &n3);


  //Descoberta do maior números
  if (n1 > n2 && n1 > n3)
    {
      maior = n1;
    }
  else if (n2 > n1 && n2 > n3)
    {
      maior = n2;
    }
  else
    {
      maior = n3;
    }

  //Imprimindo para o usuário
  printf ("Maior número = %lf", maior);

  return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define TAMANHO_VETOR 100

void preenche_vetor(int v[],int tamanho){
    for(int i = 0; i<tamanho;i++){
        v[i] = 2*i +1;
    }
}

int main()
{
  int vetor[TAMANHO_VETOR];
  
  int tamanho;
  printf("Quantos elementos? ");
  scanf("%d",&tamanho);
  
  //chamando a função que preencherá o vetor
  preenche_vetor(vetor,tamanho);
  
  for(int i = 0; i<tamanho;i++){
      printf("%d ",vetor[i]);
  }
  printf("\n");
 
 
  return 0;

}

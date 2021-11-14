/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void modifica_vetor(double v[]){
    for(int i = 0; i<5;i++){
        v[i] = 0.5 * v[i];
    }
}

int main()
{
  double vet[] = {2.4,7.8,10,-1.2,6};
  
  //chamando a função que vai modificar o vetor
  modifica_vetor(vet);
  
  for(int i = 0; i<5;i++){
      printf("%g ",vet[i]);
  }
  printf("\n");
 
 
  return 0;

}

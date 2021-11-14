/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int vetor[5] = {10,20,30,40,50};
    
  for(int i = 0; i<5;i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");
  
  int *p = vetor;
  
  for(int i = 0; i<5;i++){
    printf("%d \n",p[i]);
  }

 
  return 0;

}

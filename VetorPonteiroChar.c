/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  char vetor[5] = {'h','e','l','l','o'};
  
  char *p_char = vetor;
  
  for(int i = 0; i<5;i++){
      printf("%c",p_char[i]);
  }
    
 
 
  return 0;

}

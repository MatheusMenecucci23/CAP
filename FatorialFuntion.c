/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

long long int fatorial(int);

int main ()
{
  int n;
  scanf("%d",&n);
  printf("%lld",fatorial(n));
  return 0;
}

long long int fatorial(int n)
{
    long long int i,resultado;
    
    resultado = n;
    
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    for(i=1;i<n;i++){
      resultado = resultado * i;
     
    }
    return resultado;
}


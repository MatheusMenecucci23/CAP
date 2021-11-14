/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
//long long int combinacao(int, int);
long long int fatorial(int);
long long int combinacao(int,int);
int main()
{
    int n,p;
    
    scanf("%d",&n);
    scanf("%d",&p);
   printf("%lld",combinacao(p,n));
    

    return 0;
}
long long int fatorial(int n){
    long long int i,resultado;
    resultado = n;
    for(i=1; i<n;i++){
        resultado = resultado*i;
    }
 
    return resultado;
}
long long int combinacao(int p, int n){
    int dif;
    long long int c;
    dif = n-p;
    return c = fatorial(n)/(fatorial(p)*fatorial(dif));
}

   


    
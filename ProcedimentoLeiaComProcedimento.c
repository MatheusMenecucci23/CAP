/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void leia(int *);
int main()
{
    int n;
    leia(&n);
    printf("%d", n);

    return 0;
}
void limite(int *n){
    if(*n<0){
        *n=0;
    }else if(*n>10){
        *n = 10;
    }
}
void leia(int *n){
    scanf("%d",n);
    limite(n);
}
 

    
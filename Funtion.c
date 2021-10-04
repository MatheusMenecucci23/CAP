/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
double max(double, double);

int main()
{
   printf("%g", max(1.2, 1.7));
   printf("%g", max(-2.4, 0));

    return 0;
}
double max(double valor1, double valor2){
    double maior;
    if(valor1<valor2){
        maior = valor2;
    }else{
        maior = valor1;
    }
}

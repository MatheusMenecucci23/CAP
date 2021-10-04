/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
char compare(double, double);

int main ()
{
  printf("%c", compare(10/0.5, 20)); 
  return 0;
}

char compare(double valor1, double valor2)
{
    char resp[2];
    if(valor1<valor2){
        strcpy(resp,"<");
    }else if(valor1>valor2){
       strcpy(resp,">");
    }else{
       strcpy(resp,"=");
    }
    return *resp;
}


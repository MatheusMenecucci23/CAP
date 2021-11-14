/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i;
   int *p;//* indicando que essa variável é um ponteiro
   
   i = 100;
   
   p = &i;//p está apontando para i
   printf("i: %d\n",i);
   
   *p = 2;//colocando o valor 2 dentro de p que colocará o valor 2 dentro di I
    printf("i: %d\n",i);
   


    return 0;
}

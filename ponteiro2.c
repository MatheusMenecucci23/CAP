/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int var_int;
   int *point_int;//* indicando que essa variável é um ponteiro
   
   var_int = 10;
   //pont_int está apontando para var_int
   point_int = &var_int;
   printf("%d\n", *point_int);
   
   //inserindo um valor dentro de var_int pelo ponteiro com o *;
   *point_int = 1000;
   printf("%d\n",*point_int);
   

    //atribuindo
   double var_double;
   double *pont_double;
   
   pont_double = &var_double;
   *pont_double = 3.25;
   printf("%g", var_double);


    return 0;
}

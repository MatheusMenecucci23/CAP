/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
double converter(double);

int main ()
{
  double temp;
  double valorConvertido;
  
  scanf ("%lf",&temp); 
  
  valorConvertido = converter(temp);
  printf("%.1lf",valorConvertido);
  
  return 0;
}

double converter(double temp)
{
    double f;
    f = (temp * 9/5) + 32;
    return f;
}

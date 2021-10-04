/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool duas_raizes_reais(float, float, float);

int main ()
{
  printf("%s", (duas_raizes_reais(0, 0, 0))? "sim":"não");
  return 0;
}

bool duas_raizes_reais(float a, float b, float c)
{
    float delta, x1, x2;
    
    if(a == 0){
        return false;
    }
    
    delta = b*b - 4 *a * c;
    
    if(delta<0){
        return false;
    }
    
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    
    if(x1 != x2){
        return true;
    }

}


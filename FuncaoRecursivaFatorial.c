/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fat(int);
int main()
{
    printf("%d",fat(3));

    return 0;
}
int fat(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fat(n-1);
    }
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int dobro(int *);

int main()
{
    int a;
    printf("Entre com o valor de a: ");
    scanf("%d",&a);
    printf("O dobro de %d = %d\n",a,dobro(&a));
    printf("%d é o dobro de %d\n",dobro(&a),a);

    return 0;
}
int dobro(int *x){
    *x = 2*(*x);
    return *x;
}
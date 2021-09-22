/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Declração Locais
    int n,i,maior;
    
    for(i=0; i<7; i++){
        printf("Insira o %dº número: ", i+1);
        scanf("%d",&n);
        if(i==0){
            maior = n;
        }
        if (maior<n){
             maior = n;
        }
        
    }
    printf("%d", maior);

    return 0;
}

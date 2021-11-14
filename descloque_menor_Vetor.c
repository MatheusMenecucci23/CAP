/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void desloque_menor(int vet[], int tamanho){
    int menor = vet[0];
    int c;
    for(int i=1;i<tamanho;i++){
        if(vet[i]<menor){
            menor = vet[i];
            c = i;
        }
    }
    int aux = vet[0];
    vet[0] = menor;
    vet[c] = aux;
    
}


int main()
{
    int tamanho;
    
    scanf("%d",&tamanho);
    int vet[tamanho];
   
    for(int i = 0; i<tamanho;i++){
       scanf("%d",&vet[i]);
    }
    
    desloque_menor(vet,tamanho);
    
    for(int i = 0; i<5;i++){
      printf("%d",vet[i]);
    }
    return 0;
}

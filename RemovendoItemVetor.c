/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void remova_item(int vet[], int *comprimento, int item){
    int c=-1;
    for(int i=0;i<*comprimento;i++){
        if(vet[i]==item){
            c = i;
        }
    }
    if(c>=0){
        vet[c] = vet[*comprimento-1];
        *comprimento-=1;
    }
    
}


int main()
{
    int tamanho,item;
    
    scanf("%d",&tamanho);
    int vet[tamanho];
   
    for(int i = 0; i<tamanho;i++){
       scanf("%d",&vet[i]);
    }
    scanf("%d",&item);
    
    remova_item(vet,&tamanho,item);
    
    
    for(int i = 0; i<tamanho;i++){
      printf("%d ",vet[i]);
    }
    return 0;
}

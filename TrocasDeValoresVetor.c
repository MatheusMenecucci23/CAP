/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int tamanho;
   
   scanf("%d",&tamanho);
   double vet[tamanho];
   
   for(int i = 0; i<tamanho;i++){
       scanf("%lf",&vet[i]);
   }
   
   int qtdTrocas;
   if(tamanho % 2 ==0){
       qtdTrocas = tamanho/2;
   }else{
       qtdTrocas = (tamanho-1)/2;
   }
   
   int posicoes = tamanho - 1;
   int aux;    
   for(int j = 0; j<qtdTrocas;j++){
        aux = vet[j];
        vet[j] = vet[posicoes - j];
        vet[posicoes - j] = aux;
   }
   
   for(int c = 0;c<tamanho;c++){
       printf("%.0lf\n",vet[c]);
   }
    return 0;
}

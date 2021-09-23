/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
    //Declração Locais
   int n,maior,i;
   char resp[3];
   i = 0;
   do{
       printf("Digite um número: ");
       scanf("%d", &n);
       // //quando o algoritmo ler um número e ler um caracter é preciso colocar fflush
       fflush(stdin);
       if (i==0){
           maior = n;
       }
       i++;
       if (n>maior){
           maior = n;
       }
       printf("Deseja continuar? Digite sim ou não ");
       scanf("%s",resp);
   }
   while (strcmp(resp,"sim") == 0);
   printf("%d",maior);
    

    return 0;
}

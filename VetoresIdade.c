/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //iniciação do conteúdo dos vetores com 0
    int contador[121] = {0};
    
    int quantidade;
    printf("Quantidade de idade:");
    scanf("%d",&quantidade);
    
    for(int i = 0; i < quantidade; i++){
        int idade;
         printf("Idade %3d", i);
         scanf("%d", &idade);
         
         contador[idade]++;
    };
    for(int idade = 0; idade< 121; idade++){
        printf("idade %5d:  %5d ocorrencia\n", idade, contador[idade]);
    };
    
    

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //OBS: após iniciada a matriz, os valores que não são inicializados recebem 0
   
   
    //Declaração de matrizes
    int mat[5][8]// 5 linhas e 8 colunas
    
    //atribuindo valores a posição da matriz
    mat[0][0] = 10;
    
    for(int j = 0; j< 8;j++){
        //atribuindo 0 a toda a linha 2
        mat[2][j] = 0;
    }
    
    for(int i = 0; j< 8;j++){
        //atribuindo 0 a toda a coluna 5
        mat[i][5] = 0;
    }
    
    for(int i = 0; i<6;j++){//controla a linha
        for(int j =0; j<8;j++){//controla a coluna
            //atribuindo o valor 0 para toda a matriz
            mat[i][j]=0
        }
    }
    
    //inicilizando todos os valores de uma matriz
    int mat2[][5] = {
        {7,6,3,1,4},
        {0,1,0,0,1},
        {1,2,3,2,1}
    };
    
    //inicilizando todo as casas da matriz como 0
    int mat3[3][5]={{0}}
    
    //lendo um valor e jogando dentro da matriz
    scanf("%d",%mat3[1][1])
    
    
    
    
    printf("Hello World");

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

void preencha_zeros(double mat[LINHAS][COLUNAS],int linhas,int colunas){
    for(int i = 0; i<linhas;i++){
        for(int j = 0;j<colunas;j++){
            mat[i][j] = 0;
        }
    }
}

int main()
{
    int linhas = 10;
    int colunas = 10;
    double mat[linhas][colunas];
    
    preencha_zeros(mat, linhas, colunas);
    
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            printf("%.0lf",mat[i][j]);
        }
    }
    

    return 0;
}

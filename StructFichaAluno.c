/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //criando uma struct
    
    struct ficha_aluno{
        //definindo o que vai ter na variavel do tipo ficha_aluno
        char nome[40];
        int numero;
        float nota;
    };

    //Criando uma variável com uma struct
    struct ficha_aluno aluno;
    
    printf("\n------cadastro de aluno-----\n");
    
    printf("Nome do aluno: ");
    //nome
    fgets(aluno.nome,40,stdin);
    
    printf("Digite o número do aluno: ");;
    scanf("%d", &aluno.numero);
    
    printf("Informe a nota do aluno: ");;
    scanf("%f", &aluno.nota);
    
    printf("----------Dados do aluno--------------\n");
    printf("Nome.......%s",aluno.nome);
    printf("Numero.....%d\n",aluno.numero);
    printf("Nota.......%.2f\n",aluno.nota);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct aluno
{
    char sobrenome[50];
    int ano_nascimento;
    int matricula;
} aluno;

aluno novo_aluno()
{
    aluno p;
    getchar();
    printf("Sobrenome: ");
    fgets(p.sobrenome, 50, stdin);
    printf("matricula: ");
    scanf ("%d", &p.matricula);
    printf("Ano de nascimento: ");
    scanf("%d", &p.ano_nascimento);
    return p;
}
void imprimirAluno(aluno *vetAluno, int nroAlunos){
    for (int j = 0; j < nroAlunos; j++)
    {
        printf("\nSobrenome = %s",vetAluno[j].sobrenome);
        printf("Ano de nascimento = %d",vetAluno[j].ano_nascimento);
        printf("\nNumero de matricula = %d", vetAluno[j].matricula);
        printf("\n");
        
    }
}
int main(void)
{
    aluno* vetAluno;
    int nroAlunos;
    printf("\nInforme o número de alunos atendidos: ");
    scanf("%d",&nroAlunos);

    vetAluno = (aluno *) malloc (nroAlunos * sizeof (aluno));
    
    if (vetAluno == NULL)
    {
        printf("Erro durante a alocação de memória");
        exit(1);
    }

    for (int i = 0; i < nroAlunos; i++)
    {
        vetAluno[i] = novo_aluno();
    }
    
    imprimirAluno(vetAluno,nroAlunos);
    
    free(vetAluno);
    return 0;
}


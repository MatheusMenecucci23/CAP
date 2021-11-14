#include <stdio.h>
int main()
{
    //definindo uma struct
    struct student{
        //definindo o que vai ter na variavel do tipo ficha_aluno
        int id;
        float grade;
    };
    
    
    //criando a variavel aluno do tipo student
    struct student aluno2,aluno3;
    
    
    
    //Inicializando a variavel
    aluno2.id=20;
    aluno2.grade = 9.5;
    
    //Inicializando a variavel
   scanf("%d %f",&aluno3.id,&aluno3.grade);
    
    
    //Imprimindo para o usuário
    printf("Aluno id: %d \naluno nota = %.2f\n",aluno3.id,aluno3.grade);
   
    printf("Aluno2 id: %d \naluno2 nota = .%.2f",aluno2.id,aluno2.grade);

    return 0;
}
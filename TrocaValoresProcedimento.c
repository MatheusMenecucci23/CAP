/*

Objetivo: Fazer a troca de dois valores;

*/
#include <stdio.h>
void troca(int *,int *);

int main()
{
    int x,y;
    
    printf("Insira o valor de x ");
    scanf("%d",&x);
    printf("Insira o valor de y ");
    scanf("%d",&y);
    
    //& faz a passagem por referencia;
    troca(&x,&y);
    printf("x depois da troca = %d\n",x);
    printf("y depois da troca %d\n",y);

    return 0;
}
//Procedimento
//Procedimento não retorna nada ou retorna vazio(void)
//Procedimento altera a variável original;
void troca(int *a, int *b){
   int aux;
   aux = *a;
   *a = *b;
   *b = aux;
}
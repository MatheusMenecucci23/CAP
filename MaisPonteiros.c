/*
Matheus Menecucci


*/
#include <stdio.h>
void leituraComValidacao(int *, int *);
int maxFunc(int *, int *, int *);

int main()
{
    int v1,v2,max;
    
    v1 = -2;
    v2 = -2;
    
    leituraComValidacao(&v1,&v2);
    
    maxFunc(&v1,&v2,&max);
    
    printf("O valor máximo é %d",max);

    return 0;
}
void leituraComValidacao(int *v1, int *v2){
    
    int valor1, valor2;
    
    while(*v1<0 || *v2<0){
        printf("Entre com dois números maiores que 0\n");
        scanf("%d",&valor1);
        scanf("%d",&valor2);
        *v1 = valor1;
        *v2 = valor2;
    }
   
}

int maxFunc(int *v1, int *v2, int *max){
    
    if(*v1>*v2){
        *max = *v1;
    }else{
        *max = *v2;
    }
}

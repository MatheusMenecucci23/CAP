/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int v1,v2,v3;
    scanf("%d %d %d", &v1,&v2,&v3);
    
    //meu código
    int *p_minimo;
    int *p_maximo;
    
    if((v1>v2) && (v1>v3)){
        p_maximo = &v1;
    }else if((v2>v1) && (v2>v3)){
        p_maximo = &v2;
    }else{
        p_maximo = &v3;
    }
    
    if((v1<v2) && (v1<v3)){
        p_minimo = &v1;
    }else if((v2<v1) && (v2<v3)){
        p_minimo = &v2;
    }else{
        p_minimo = &v3;
    }
    
    //valor 10 20 30
    int auxiliar = *p_minimo;
    //auxiliar = v1
    
    *p_minimo = *p_maximo;
    //v1 = v3
    
    *p_maximo = auxiliar;
    //v3 = v1
    
    printf("%d %d %d\n",v1,v2,v3);

    return 0;
}

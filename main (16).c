/*

Autor: Matheus Menecucci
RA: 800310
Data de criação: 28/09/2021 

Objetivo: O usuário informa x e y. O algoritmo apresenta a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar.

*/

//Bibliotecas
#include <stdio.h>

int main()
{
    //Declaração de variáveis
    int casoTeste, x, y,c,i,soma;
    
    
    //Leitura de Dados
    scanf("%d",&casoTeste);
    
    for(i=0;i<casoTeste;i++){
        
        //Leitura de dados
        scanf("%d",&x);
        scanf("%d",&y);
        
        //Zerando a soma
        soma = 0;
        
        for(c=0;c<y;c++){
            //verificando se o número é impar
            if(x%2==1){
                soma += x;
                x+=2;
            }else{
                //se o x começar com par na soma entra o próximo número que é impar
                soma += x +1;
                //incrementando o x para ele esse bloco continuar sendo excutado
                x += 2;
              
            }
        }
        //Imprimindo para o usuário
        printf("%d\n",soma);
    }
    return 0;
}

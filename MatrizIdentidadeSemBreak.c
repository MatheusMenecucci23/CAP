
#include <stdio.h>

int main()
{
    /*
    Matheus Menecucci
    800310
    Objetivo: construir um algoritmo que detrmina se uma matriz qualquer é uma matriz identidade

    A identidade é declarada como 1 e só muda se a matriz não atender aos requisito de matriz identidade
    */
   
    int identidade = 1;
    for(int i = 0; i<numero_linhas;i++){
        for(int j =0; j<numero_colunas;j++){
            //verificando se a diagonal princpal é diferente de 1
            if(i==j){
                if(mat[i][j] != 1){
                    identidade = 0;
                }
            }else{
                //verificando se as demais posições são diferente de 0
                if(mat[i][j] != 0){
                    identidade = 0;
                }
            }
        }
    }

    return 0;
}

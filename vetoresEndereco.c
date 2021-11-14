#include <stdio.h>

int main(void) {

  int vetor[5] = {10,20,30,40,50};
    
  for(int i = 0; i<5;i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");


  //endereços
  printf("endereço do primeiro velor do vetor %p\n",&vetor[0]);
    
  //vetor sem colchete indica o endereço de memória do vetor
  printf("endereço do primeiro velor do vetor %p",vetor);


  printf("Hello World\n");
  return 0;
}
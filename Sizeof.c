#include <stdio.h>
#include <stdlib.h>
struct ponto{
    int x,y;
};

int main(void) {
    printf("char: %ld\n", sizeof(char));
    printf("int: %ld\n",sizeof(int));
    printf("float: %ld\n",sizeof(float));
    printf("double: %ld\n",sizeof(double));
    printf("struct ponto: %ld\n", sizeof(struct ponto));
    
    return 0;
}


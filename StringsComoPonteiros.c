#include <stdio.h>

#include <stdlib.h>

int main(void) {

    char * nome;
    nome = (char *) calloc (10,sizeof(char));
    printf("Informe o seu nome: ");
    //lendo o nome
    gets(nome);
    printf("Nome informado: %s\n",nome);
    return 0;
}


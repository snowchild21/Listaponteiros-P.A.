#include <stdio.h>
#include <stdlib.h>

/*18. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.*/

/* Um ponteiro para uma funcao é um ponteiro que armazena o endereco de uma funcao, isso permite
com que o usuario possa acessar as funcoes que ele declarou em seu codigo atraves desse ponteiro.
Isso pode ser util quando e necessario passar uma funcao como argumento para outra funcao.*/

// Funcao que sera referenciada por um ponteiro.
int nordestino(int a, int b){
    return ((a+b)*(a+b));
}

int main() {
int  a = 2, b = -5;

// pnordestino e um ponteiro para funcoes que recebe dois inteiros e retorna um inteiro.
int (*pnordestino)(int, int) = nordestino;

/* imprimindo a funcao usando o ponteiro, nele e passado os argumentos (a e b), e o ponteiro retorna
um inteiro.*/
printf("Função nordestino: %d", pnordestino(a, b));

 return 0;
}
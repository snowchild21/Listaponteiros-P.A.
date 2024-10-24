#include <stdio.h>

/* 11. Um programador pretendia armazenar em um struct (acessível através de um ponteiro) o nome
de um usuário e um valor inteiro associado e preparou o seguinte programa. Há algum erro
presente no código? Se sim, qual é ele e como pode ser corrigido*/

struct teste{
  int x = 3;
  char nome[] = "jose";
};
/* Esta inicialização se deu de forma errada, pois, dentro do struct, apenas iniciam-se as variaveis. E somente
depois que se atribui valor a elas.*/
main(){ // A funcao main não tem um tipo de variavel atribuido a ela.
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->nome);
  /* não da para manipular os dados do struct desta maneira. Para ser manipulado, via ponteiros, deve-se ultilizar
  a funcao malloc para alocar memoria ao ponteiro. Caso isso nao seja feito, o codigo retornara qualquer coisa
  menos o que pedimos.*/
  // exemplo de alocacao: s = (struct teste *)malloc(sizeof(struct teste));
  // obs: usar o header stdlib.h para usar a funcao malloc
  
}
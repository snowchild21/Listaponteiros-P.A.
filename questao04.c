#include <stdio.h>

/* 4. Determine o que será mostrado pelo seguinte program nos trechos (a) até (n). Compile-o,
execute-o e verifique se foram obtidas as respostas esperadas. Justifique o porque de cada uma.*/

int main()
{
 int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); // *p1 = 20 sobrescreve 20 na variavel valor, ent essa expressao retorna 20.
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // *p2 = 29.0 sobrescreve 29.0 na variavel temp, ent essa expressao retorna 29.0. 
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // p3 aponta para a posicao 0 do vetor nome, a qual esta armazenado P. e aux imprime o char de p3.
    /* (d) */
  p3= &nome[4];
  aux= *p3;
  printf("%c \n", aux); // semelhante a anterior,p3 aponta para a posicao 4 do vetor nome, a qual esta armazenado E. Aux imprime o char de p3.
  /* (e) */
  p3 = nome;
 printf("%c \n", *p3); // semelhante a (c), p3 aponta para nome, mas sem especificacao da posicao, ent retorna a primeira posição, que tem o character P
  /* (f) */
  p3 = p3+4;
  printf("%c \n", *p3); // p3, agr somado 4 posicoes, vai retornar e
  /* (g) */
  p3--;
  printf("%c \n", *p3); // p3, decrescido de 1, retorna t
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // idade ira retornar o valor q p4 aponta, que nesse caso é a primeira posicao do vetor. Ou seja: 31
  /* (i) */
  p5= p4+1;
  idade= *p5;
  printf("%d \n", idade); // p5 recebe o endereco de p4 acrescido de 1, ent retornara vetor[1], q vale 45
  /* (j) */
  p4= p5+1;
  idade = *p4;
  printf("%d \n", idade); // p4 agr, e declarado como o p5 acrescido de 1 posicao, ent retornara vetor[2], q vale 27
  /* (l) */
  p4= p4-2;
  idade= *p4;
  printf("%d \n", idade); // p4, decrescido de 2, ira retornar o vetor[0], q vale 31
  /* (m) */
  p5= &vetor[2]-1;
  printf("%d \n", *p5); // p5 foi declaraado como o endereco de vetor[2] decrescido de 1 posicao, ou seja, seu valor é 45
  /* (n) */
  p5++;
  printf("%d \n", *p5);// p5, q aponta para a posicao vetor[1], é acrescido de 1, ent retorna vetor[2], q vale 27
 
    return 0;
}
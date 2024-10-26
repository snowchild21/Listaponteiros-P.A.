#include <stdio.h>
/* 14. Justifique porque a saída do seguinte programa é mostrado o valor 19*/
int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1;
  c = **ppc;
  *pb += 2;
  b = *pb;
  a += 3;
  return a + b + c;
}

void main() {
  int c, *b, **a;
  c = 5;
  b = &c;
  a = &b;
  printf("%d\n", f(c, b, a)); 
  /* Na verdade, o programa nao printa 19, ele printa 22. Talvez possa ser pensado
  que por a, receber c, que é uma variavel int, ele não mudaria de valor globalmente. Entretanto,
  na funcao ,antes de retornar os valores, o "a" é declarado como "a + 3", e como "a" era "c" que e
  igual a 5, ent "a" vale 8 localmente na funcao, e depois retorna a soma das 3 variaveis.*/ 
/* em linhas gerais, c vai receber **ppc, que valia 6, depois b vai receber *pb, que vale 8, e depois
a vai ser incrementado 3, mas por n ser ponteiro, a passagem foi feita por valor. Então, ele vai ser ainda 5,
então após a incremetação, vai passar a ser 8.
logo, o return vai ser (8 + 8 + 6) =  22.*/
  getchar();
  return 0;
}

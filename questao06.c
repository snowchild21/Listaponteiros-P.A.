#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* 6. Assumindo que um inteiro tem 4 bytes de tamanho, qual será a saída do seguinte programa?
Justifique sua resposta*/

void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1];
  printf("%s\n", t);
}
int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  funcao(a);
  /*  a funcao pega o argumento passado para ela, nesse caso o array de ponteiros "a" para char, e 
  faz a seguinte expressao: t = a += (mesma coisa de a = a + algo)(tamanhanho do int = 4)[-1]. 
  Ou seja, ele vai pegar a e vai somar o indice 4 posicoes, e depois volta uma posicao.Depois disso, 
  ira imprimir o literal t Ent fica : ab -> ij (a + 4) e depois ij -> gh ( (a + 4) - 1).
  Portanto, sera imprimido "gh".*/
  return 0;
}
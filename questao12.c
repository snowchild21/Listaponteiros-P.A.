#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
/* O programa acima tem dois equivocos. O primeiro é que o ponteiro para inteiro costante , x, está
recebendo um valor literal, porém, ponteiros não recebem valores, e sim, enderecos. O Segundo é que
no printf, ao tentar incrementar um valor constante, o programa vai dar erro, pois, como ja dito, o valor
do ponteiro de x é constante, e n pode ser alterado.
}
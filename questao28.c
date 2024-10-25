#include <stdio.h>

 /*28. Considere o exemplo seguinte. Compile-o, execute-o e JUSTIFI, usando os recursos que julgar
 necessários, porque o programa imprime o resultado que imprime.*/
 
 char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
 char **b[] = {a + 3, a + 2, a + 1, a}; // inverteu a ordem das strings.
 char ***c = b;
 
 int main() {
  printf("%s ", **++c); // antes de printar o valor, o endereço é incrementado.
  //logo, vai ser printado a posição c++, que é b[1], que é a[3], que é BRITO.
  printf("%s ", *--*++c + 3); /* c, que era b[1], é incrementado para b[2](novo endereço de C), desreferenciado 
  e vira (a + 1), é decrementado e vira (a), é desreferenciado e vira AGOSTINHO, dai o print pula 3 posições
  daí vira STINHO, e é isso que é impresso no terminal.*/
  printf("%s ", *c[-2] + 3); /* C, que esta em b[2], é desreferenciad, e decrementado2 vezes, e aponta para a + 3
  em seguida é desreferenciado novamente e vira JUNIOR, somado 3 e vira IOR*/
  printf("%s ", c[-1][-1] + 1); /*C, que esta em b[2], é desreferenciado, e decrementado, apontando para a + 2.
  em seguida é desreferenciado novamente, e decrementado e aponta para MEDEIROS, somado 1 e vira EDEIROS*/
  return 0;
 }

 #include <stdio.h>
 /*  15. O que será mostrado na tela pelo seguinte programa? Justifique sua resposta.*/
 
 int main(){
 unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
 {7, 8, 9}, {10, 11, 12}};
  printf("%p, %p, %p", x+3, *(x+3), *(x+2)+3);
  /* O print passa 3 valores para imprimir, sendo eles:
  x + 3 : imprimir o endereço de x[3] (que sera x[3][0]).
  *(x+3): imprime também o endereço de x[3], pois o * so  disreferencia
  uma vez, sendo q estamos tratando de um array bidimensional, e nao de um vetor normal.
  *(x+2) + 3: semelhante a anterior, imprime o endereço de , x[2] + 3 posições, o qual
  é a posição de x[3].
  
  portanto, o programa imprimira 3x o mesmo endereço*/
  
  return 0;
 }

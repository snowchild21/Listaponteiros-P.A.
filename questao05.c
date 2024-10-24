#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* 5. Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado.*/

void funcao(char** str){
  str++;      
} /* essa funcao é uma passagem por valor, ou seja, a alteracao so ocorre dentro da funcao, e nao no main,
por isso o programa imprime "Agostinho"*/
int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}
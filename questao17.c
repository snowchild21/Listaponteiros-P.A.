#include <stdio.h>
#include <stdlib.h>

/*17. O que C) memory leak? Crie um exemplo de programa em C que contenha um memory leak e
proponha uma correC'C#o para o mesmo.*/
/*R: Memory leak, ou vazamento de memoria, e quando o usuario faz uso da alocacao dinamica de memoria
mas nao libera o conteudo, ultilizando a funcao free. Essa falta de liberacao da memoria alocada
pode resultar em uma acumulacao da memoria ao longo da execucao do programa, o que pode ser desnecessario.*/


int main() {

int **x;
int nl = 4, nc = 3, i, j;
x = malloc(nl * sizeof(int *));
for (i = 0; i < nl; i++) {
  x[i] = malloc(nl * nc * sizeof(int));
   }
for (i = 1; i < nl; i++) {
x[i] = x[i - 1] + nc;
}
for (i = 0; i < nl; i++) {
for (j = 0; j < nc; j++) {
x[i][j] = rand() % 100;
}
}
x[0][-1] = 9;
for (i = 0; i < nl; i++) {
for (j = 0; j < nc; j++) {
printf("%2d ", x[i][j]);
}
printf("\n");
}
/* modifiquei o seguinte trecho para causar um memory leak. Na seguinte situacao,
no codigo, primeiro C) liberado X ao inves de x[0]. Ao fazer isso, liberamos primeiro
a variavel que continha os enderecos de cada linha da matriz. Portanto, liberando nessa ordem
causamos um memory leak por nao conseguir mais acessar cada linha da matriz. para
consertamos esse erro, devemos trocar a ordem dos frees :
 for (i = 0; i < nl; i++) {
    free(x[i]);
 }
     free(x);
     
      x = NULL;
     
      Agora sim, liberamos a memoria da forma correta*/

free(x);
 x = NULL;
 for (i = 0; i < nl; i++) {
        free(x[i]);
}

 return 0;
}
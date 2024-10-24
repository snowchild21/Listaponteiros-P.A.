#include <stdio.h>
/* 9. Considerando a declaração: int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique.*/

int main(void){
int mat[4] = {1, 2, 3, 4}, *p, x;
p = mat + 1; /* nessa expressao, o ponteiro p aponta para o primeiro elemento acrescido de 1 posicao do vetor mat.
nesse exemplo em que defini os elementos do mat, p vai retornar 2, por ser o segundo elemento do vetor.*/
printf("%d", *p);
p = mat;
printf("%d", *p); /* nessa expressao,semelhante a primeira, p vai apontar para o primeiro elemento, por está sendo
declarado como apenas "mat".*/
p = mat;
printf("%d", *p); /* nessa expressao,semelhante a primeira, p vai apontar para o primeiro elemento, por está sendo
declarado como apenas "mat".*/
x = (*mat);
printf("%d", x);  /* nessa expressao, x é declarado como sendo o valor do primeiro elemento de mat, pois o *
é usado para acessar o valor do endereco indicado, neste caso, o primeiro.*/  
return 0;
}



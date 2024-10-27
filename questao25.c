#include <stdio.h>
#include <string.h>

/*  25. (ENADE, 2023) Memory leak, ou vazamento de memória, é um problema que ocorre em
 sistemas computacionais quando uma parte da memória, alocada para uma determinada
 operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
 é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
 programação pode levar a falhas no sistema se a memória for completamente consumida. Um
 dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua
 resposta.*/

 //(A)
void f( ){
 void *s;
 s = malloc(50);
 free(s);
 } // sem problema
 //(B)
 int f( ){
 float *a;
 return 0;
 } // sem problema 
 //(C)
 int f(char *data){
 void *s;
 s = malloc(50);
 int size = strlen(data);
 if (size > 50){
 return(-1);
 free(s);
 } 
/* há vazamento de memória. o free(s) é colocado após a condição do tamanho do size, ou seja, quando essa condição for verdade,
vai ocorrer um memory leak.*/
 return 0;
 }
 //(D)
 int *f(int n){
 int *num = malloc(sizeof(int)*n);
 return num;
 }
 int main(void){
 int *num;
 num = f(10);
 free(num);
 return 0;
 }// sem problema
 //(E)
 void f(int n){
 char *m = malloc(10);
 char *n = malloc(10);
 free(m);
 m = n;
 free(m);
 free(n);
 }// sem problema
 

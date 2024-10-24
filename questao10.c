#include <stdio.h>

/* 10. O que fazem os seguintes programas em C?*/

#include <stdio.h>
int main(){
    
     // Programa 1 //
 /* int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }*/
        
   /* Esse programa imprime os valores que foram colocados no vetor vet. Este programa faz isso ultilizando
   um laço de repetição que realiza 3 loops, afim de imprimir os 3 dados do vetor. Para isso, ele usa a referencia-
   ção "*(vet+i)", a qual vai chamar o dado inserido no vetor correspondente ao número do loop atual. Ou seja:
   no laço 2  (i = 1) ele vai imprimir o dado da posição vet (posição 0) +  1, ent imprimirá a segunda linha
   de vet[].*/
   // Programa 2 //
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
   /* já esse programa tem como função imprimir os endereços dos dados do vetor vet. Este programa faz isso ultilizando
   um laço de repetição que realiza 3 loops, afim de imprimir os endereços de cada dado usando o &X. Ou seja:
   no laço 1  (i = o) ele vai imprimir o endereço da posição vet[0] (pois, vet + 0 = vet), 
   entao imprimira o endereço do elemento 4, que e, por exemplo, 0x7ff...961c.*/
return 0;
}
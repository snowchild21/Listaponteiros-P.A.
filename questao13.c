#include <stdio.h>

/* 13. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
◦ x for declarado como int?
◦ x for declarado como float?
◦ x for declarado como double?
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.
*/

int main()
{
   /*   - para o vetor x[4] de tipo char, os resultados foram:
   x + 1: 4093
   x + 2: 4094
   x + 3: 4095
   
   - para o vetor x[4] de tipo int, os resultados foram:
   x + 1: 4094
   x + 2: 4096
   x + 3: 4098
   
   - para o vetor x[4] de tipo float, os resultados foram:
   x + 1: 4096
   x + 2: 409a
   x + 3: 409e
   
   - para o vetor x[4] de tipo double, os resultados foram:
   x + 1: 409a
   x + 2: 4101
   x + 3: 4109
    */
   
    char xch[4] = {1, 2, 3, 4};
    int xint[4] = {1, 2, 3, 4};
    float xfl[4] = {1, 2, 3, 4};
    double xdb[4] = {1, 2, 3, 4};
   
   
   for(int i = 0; i<4; i++){
        printf("%p \n", xch + i);
   }
    for(int i = 0; i<4; i++){
        printf("%p \n", xint + i);
    }
    printf("\n\n");
    for(int i = 0; i<4; i++){
        printf("%p \n", xfl + i);
    }
    printf("\n\n");
    for(int i = 0; i<4; i++){
        printf("%p \n", xdb + i);
    }
   
   
   /* Sim, para cada variavel, as posicoes estao corretamente alinhadas (dependendo do
   compilador, a quantidade de bytes pode variar).
   No meu compilador, o int tinha a mesma quantiade de bytes que o float (4 bytes),
   mas tirando isso, as posicoes q o programa calculou calcula de forma analoga a
   que eu fiz idealmente.
   */
 
    return 0;
}
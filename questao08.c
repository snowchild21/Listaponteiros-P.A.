#include <stdio.h>
/* 8. Assumindo que pulo[] é um vetor do tipo int, qual das seguintes expressões referenciam o valor
do terceiro elemento do vetor?*/

int main(void){
int p[4] = {4, 5, 8, 9};    
    int *pulo;
    pulo = p;
    
   /* for(int i = 0; i<4; i++){
        printf("%d\n", *(p + i));
    }*/
    *(pulo + 2); // essa expressao retorna, de fato, o terceiro elemento do vetor p.
    *(pulo + 4); // essa expressao nao retorna o terceiro elemento, e sim, o quinto.
    pulo + 4; // essa nao retorna nennhum elemento do vetor, pega o endereco do ponteiro e soma 4.
    pulo + 2; // semelhante a anterior, sendo que soma 2 ao endereco de pulo.
    
return 0;
}



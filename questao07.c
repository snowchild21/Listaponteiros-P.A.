#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*7. Determine o que será mostrado pelo seguinte programa. Compile-o, execute-o e explique se
foram obtidas as respostas esperadas. Justifique o porque de cada uma.*/
int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i); // imprime sim, corretamente as posicoes do vetor vet
  printf(" vet[%d] = %.1f",i, vet[i]); // imprime corretamente os valores armazenados correspondente as posicoes
  printf(" *(f + %d) = %.1f",i, *(f+i)); // imprime corretamente o valor armazenado no ponteiro seguindo a posicao indicada por i
   printf(" &vet[%d] = %p",i, &vet[i]); /* imprime o endereco correspondente a cada um, a prova disso é o finalzinho de cada endereco
   que é acrescido de 4 (ex: 0; 4; 8; c; 0) pois o int nessa arq. tem 4 bytes.*/
  printf(" (f + %d) = %p",i, f+i); // semelhante a anterior, imprime corretamente
  printf("\n");
  }
}
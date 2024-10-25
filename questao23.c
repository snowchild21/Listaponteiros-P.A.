#include <stdio.h>
#include <stdlib.h>
/* 23. Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
 correspondentes de outros dois vetores. Os tamanhos dos vetores devem ser fornecidos pelo
 usuário, portanto processos de alocação dinâmica de memória são necessários. Por exemplo, se
 o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 
 3, 5,-3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
 Exemplo:*/

// criando a função que soma os vetores corretamente.
    int soma_vetores(int *A ,int *B,int *Soma,int n){
        for(int i=0;i<n;i++){
        Soma[i] = A[i] + B[i];
      }
    }
int main(){
int Rn, i; // espaço e índice
int *V1,*V2, *V3; // vetores 1 e 2 e vetor 3(resultado da soma)
  
//o usuario deve definir o R^n dos vetores
printf("Qual é o espaço R dos seus vetores: ");
scanf("%d", &Rn);
  
  //Hora de alocar nossa memória
V1 = (int*) malloc(Rn * sizeof(int));
V2 = (int*) malloc(Rn * sizeof(int));
V3 = (int*) malloc(Rn * sizeof(int));
  
// caso ocorra erro na alocação.
     if (V1 == NULL || V2 == NULL || V3 == NULL) {
        printf("Alocação falhou.\n");
        return 1;
     }
  
  //o usuario que atribui os valores aos vetores
    printf("Atribua dados ao v1:\n");
    for(i=0;i<Rn;i++){
        scanf("\n%d", &V1[i]);
    }
     printf("Atribua dados ao v2:\n");
    for(i=0;i<Rn;i++){
        scanf("\n%d", &V2[i]);
    }

  // optei por uma saída bonitinha (vetor linha) no terminal, mas não é necessario
    printf("v1: [");
    for(i=0;i<Rn-1;i++){
        printf("%d ,", V1[i]);
    }
    printf("%d]", V1[Rn-1]);
  
    printf("\n");
  
    printf("v2: [");
    for(i=0;i<Rn-1;i++){
        printf("%d ,", V2[i]);
    }
    printf("%d]", V2[Rn-1]);

//hora de chamar a função soma_vetores
    soma_vetores(V1, V2, V3, Rn);
  
     printf("\n\nSoma: [");
    for (i = 0; i < Rn - 1; i++) {
        printf("%d, ", V3[i]);
    }
    printf("%d]\n", V3[Rn - 1]);

  // nunca se esquecer de liberar a memoria alocada, nesse caso a ordem de liberação não importa
    free(V3);
    free(V2);
    free(V1);
  
	return 0;
}

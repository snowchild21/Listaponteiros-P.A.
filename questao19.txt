#include <stdio.h>
#include <stdlib.h>
/*  19. Implemente em linguagem C uma função em um programa de computador que leia n valores do
 tipo float do teclado e os apresente em ordem crescente. Utilize alocação dinâmica de memória
 para armazenar o conjunto de pontos lidos.*/

// vamos criar a função que irá organizar nossos dados.

void crescente(float *dados, int n){
    for (int i = 0; i < n - 1; i++) { // loop que vai percorrer cada elemento menos o ultimo( vamos garantir q ele seja o maior)
        for (int j = 0; j < n - i - 1; j++) { // loop que ira deixar o ultimo elemento sendo o maior.
            if(dados[j] > dados[j + 1]){ // condicao para a ordenacao dos numeros
                float temp = dados[j];
                dados [j] = dados [j+1];
                dados [j+1] = temp;
                /* a troca dos elementos ocorrera dessa maneira, o elemento da frente(j+1) ira ser copiado para
                o de tras (j).*/
            }
        }
    }
}
int main()
{
    int n;
    printf("insira a quantidade de elementos: "); // aqui, deixei que o usuário defina a quantidade de elementos
    scanf("%d", &n);
    
    // hora de alocar o vetor dinamicamente.
    
    float *dados = (float*) malloc(n * sizeof(float));
    if (dados == NULL){ //caso a alocação falhe
        printf("ERRO NA ALOCAÇÃO.\n");
        printf("POR FAVOR REINICIE O PROGRAMA.");
        return 1;
    }
     printf("Digite os dados:\n"); 	
    for (int i = 0; i < n; i++) {
        scanf("\t %f", &dados[i]);
    }
    
    crescente(dados, n);	// chamando a função de ordenacao
    
     printf("dados em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", dados[i]);	// depois de chamada, os elementos vao se organizar em 
					// ordem crescente
    }
    
    free(dados);    //liberando a memoria alocada
    
    return 0;
}

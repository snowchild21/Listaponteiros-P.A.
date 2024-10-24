#include <stdio.h>
/*20. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
 código, explicando o que faz cada uma das linhas.*/

int crescente(const void *a, const void *b){
    // converte o tipo de dado const void para float*
    float A = *(float*)a;
    float B = *(float*)b;
    
    if(A < B){ return -1; // se isso é verdade, retorna -1
    }
    if(A > B){ return 1;    // se isso é verdade, retorna 1
    }
    return 0; // caso A e B sejam iguais, retorna 0
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
    
    qsort(dados,n,sizeof(float),crescente);
    
     printf("dados em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", dados[i]);	// depois do qsort os elementos vao se organizar em 
					// ordem crescente
    }
    
    free(dados);    //	liberando a memoria alocada
    

    return 0;
}

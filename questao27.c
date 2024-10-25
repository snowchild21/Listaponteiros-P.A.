#include <stdio.h>
#define TAM 10
/*  27. (ENADE, 2021) Observe o cC3digo abaixo escrito na linguagem C*/

/* A respeito das funções implementadas, avalie as afirmações a seguir.
 I. O resultado da impressão na linha 24 é: 7 - 7.
 II. A função funcao1(), no pior caso, é uma estratégia mais rápida do que a função funcao2().
 III. A função funcao2() implementa uma estratégia iterativa na concepção do algoritmo.
 É correto o que se afirma em:
 a. I, apenas. - correto
 b. III, apenas.
 c. I e II, apenas.
 d. II e III, apenas.
 e. I, II e III.    
 Justifique sua resposta. */


int funcao1(int vetor[], int v) {
	int i;
	for (i = 0; i < TAM; i++) {
		if (vetor[i] == v)
			return i;
	}
	return -1; // ocorreu um erro durante a execução do loop 
}
int funcao2(int vetor[], int v, int i, int f) {
	int m = (i + f) / 2; // 9 / 2 = 4.(div de inteiros)
	if (v == vetor[m])
		return m; // vetor[m] = 9, portanto, n retorna m
	if (i >= f)
		return -1;
	if (v > vetor[m] // verdade apenas na 4 vez, em que m = 7
	        return 0;
	        return funcao2(vetor, v, m+1, f);
	        else
		        return funcao2(vetor, v, i, m-1);
	}
}
int main() {
	int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	printf(
	    "%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
	    /* 
	    I - sim, o resultado será 7 - 7, pois na funcao1, é passado o argumento v = 15
	    isso so retorna i quando i = 7. Já na funcao2, o algoritmo ira rodar até que 
	    v == vetor[m], e isso só irá acontecer, analogamente, quando m = 7 pois v 
	    continua igual a 15. Portanto, funcao1 vai retornar i = 7 e funcao 2 ira 
	    retornar m = 7. i = m = 7 - 7.
	    II - incorreto, pois a funcao1 depende do TAM do vetor, realizando TAM vezes
	    o laço. Já a 2, realizara vetor[m] = v vezes, e no caso da questão, 4 vezes.
	    III - incorreto, a funcao2 não é iterativa, e sim, recursiva, pois a funcao2 nao usa laços
	    para ser realizada, e sim, os proprios ifs e returns.*/
	return 0;
}

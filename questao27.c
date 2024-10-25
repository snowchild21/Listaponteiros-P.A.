#include <stdio.h>
#define TAM 10
/*  27. (ENADE, 2021) Observe o cC3digo abaixo escrito na linguagem C*/

/* A respeito das funções implementadas, avalie as afirmações a seguir.
 I. O resultado da impressão na linha 24 é: 7 - 7.
 II. A função funcao1(), no pior caso, é uma estratégia mais rápida do que a função funcao2().
 III. A função funcao2() implementa uma estratégia iterativa na concepção do algoritmo.
 É correto o que se afirma em:
 a. I, apenas.
 b. III, apenas.
 c. I e II, apenas.
 d. II e III, apenas.
 e. I, II e III.    -    correto
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
	    II - sim, a funcao1 comparada a funcao2 é mais rapida, pois, ela realiza apenas
	    um loop, já a funcao 2, depende do valor q m vai receber pra poder ser proxima
	    ao algoritmo da funcao1, mas,mesmo assim, ainda realiza mais processos que a funcao1.
	    III - sim, a funcao2 é uma estrategia iterativa, pois, o algoritmo dependendo do valor
	    de m, torna-se um laço, que obedece aa 3 condições. No exemplo da questao, esse laço
	    é repetidido 4 vezes, até q a condição v == vetor[m] seja true.*/
	return 0;
}

1. Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

Determine o valor das seguintes expressões, justificando o porquê de cada resultado:

◦ p == &i; -- Essa expressão faz uma comparação de igualdade entre p e &i, a qual, como declarada anteriormente, é verdadeira.

◦ *p - *q; -- O asterisco antes do p e q, indica que vai utilizar o valor que eles armazenam, ou seja, o resultado de *p - *q é -2.

◦ **&p; -- Como o * vem antes de (*&i), indica que essa expressão retorna o valor de i,  que é 3.

◦ 3 - *p/(*q) + 7; -- aqui, como i e j são inteiros, a divisão deles dois resultara no valor inteiro do decimal, ou seja, como 3/5 = 0,666..., o programa usaria apenas o 0 do valor decimal, então a resposta é: 3 - 0 + 7 = 10.
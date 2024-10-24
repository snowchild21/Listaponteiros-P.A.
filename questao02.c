#include <stdio.h>

int main()
{
   
   /* Mostre o que será impresso pelo programa supondo que a variável i ocupa o endereço 4094 na
memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho*/
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, p+2, **&p, 3**p, **&p+4); 
  
  /* - o primeiro %p vai retornar o endereco de i, por exemplo: 4094.
 - o segundo %p vai retornar o endereco de i, e somar 1, ou seja, como inteiro nessa arquitetura tem 2 bytes, vai avancar 
  "2 casinhas no endereco". Usando o exemplo anterior: 4096.
 - o primeiro %d vai imprimir para o usuario o valor de i (pois o ponteiro aponta para i) + 2. Que nesse caso:
  5 + 2 = 7.
   - o segundo %d vai imprimir para o usuario o proprio valor de i, pois, o valor do endereco de p e o proprio p,
    e o valor de p e o valor que esta armazenado em i.
    - o terceiro %d retorna ao usuario uma multiplicacao entre o valor 3, e o valor de i, o qual esta armazenado
    no ponteiro p. Ou seja, 3 * *p = 3 * 5 = 15.
    - o o quarto %d retorna algo semelhante ao segundo %d ao usuario. Neste caso, seria o proprio i como explicado
    anteriormente, somado a 4. Ou seja: **&p + 4 = *p + 4 = 5 + 4 = 9. */
 return 0;
}

#include <stdio.h>

/* 3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição produzem erro de compilação? Justifique.*/

int main()
{
p = &i; // sem erro.
*q = &j; // erro, a variavel "q" ( e nao *q) recebe enderecos por ser ponteiro.
p = &*&i; // sem erro.
i = (*&)j; // erro, pos o & não possui uma variavel a qual esta atrelada (por estar dentro de ()).
i = *&j; // sem erro.
i = *&*&j; // sem erro.
q = *p; // erro, pois o ponteiro q, aponta para endereços, e nesse caso, p esta sendo chamado por seu valor (*p).
i = (*p)++ + *q; // sem erro.
 
    return 0;
}
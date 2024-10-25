 #include <stdio.h>
 /* 26. (ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
 para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
 cada um os bits possui um significado diferente, sendo necessário manipulá-los
 individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
 como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
 é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
 o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
 variáveis inteiras.*/ 
 
 /* Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
 será, exatamente, o valor da saída do programa? Explique, PASSO-A-PASSO, os cálculos
 realizados pelo programa para chegar a esse resultado.*/ 
 int main(){
 int a, b;
 int x, y, z;
 // 10 = 1010 bits
 // 1 = 0001 bits
 scanf("%d %d", &a, &b);
 x = a; y = b; z = a + b;
 while (a) { // enquanto a for diferente de 0.
 x = x | b; // 
 y = y ^ a;
 z = z & (a+b);
 a = a >> 1;
 b = b << 1;
 }
 printf ("%d %d %d \n", x, y, z); 
 /* as saidas do programa vão ser: 15 13 0.
 Ou seja, x = 15, y = 13, z = 0
 para provarmos isso, temos que realizar as operações booleanas até que o a se torne 0.
 teremos q fazer esse laço pelo menos 4 vezes, e para realizarmos, devemos transformar os valores 
 a, b, x, y, z em bits para podermos realizar as operações lógicas. Depois de feitas, teremos
 x = 1111, y = 1101, z = 0000, a = 0000 e ,finalmente, b = 0000.*/
 return 0;
 }

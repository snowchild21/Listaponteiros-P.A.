#include <stdio.h>

// 16. Suponha que as seguintes declarações tenham sido realizadas:


int main(){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value; // valido, 2.2 e atribuido a posicao 2 do vetor aloha

scanf("%f", &aloha); /*invalido, deve-se indicar a posicao que vc quer atribuir o dado
que o usuario deseja.Ex: &aloha[0]*/

aloha = "value"; // invalido, value é uma string literal e nao pode ser atribuida a float

 printf("%f", aloha); /* invalido, pois, aloha n é ponteiro. Caso fosse, o print imprimiria
o endereco de aloha[0]*/
coisas[4][4] = aloha[3];/* valido, se fizermos:
 aloha[3] = 2;
coisas[4][4] = aloha[3];
printf("%f", coisas[4][4] );
comprovamos que essa linha da certo*/
coisas[5] = aloha; // invalido, está tentando atribuir uma string de literais a uma matriz tipo float
pf = value; // invalido, falta o & antes de value para pf apontar para ele

pf = aloha; // valido, aloha é o endereço do primeiro elemento do vetir aloha
*/
    return 0;
}
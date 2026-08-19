/*
USANDO NÚMEROS BINÁRIOS

Imagine uma variável contendo o valor decimal 2,conforme:

int numero=2;

A representação binária do número 2 é: 0000 0010

A linguagem C permite que façamos operações em "baixo nível" com variáveis do tipo char,int e long int


OPERADORES E SUAS AÇÕES
    ~ NOT
    >> DESLOCAMENTO DE BITS À DIREITA
    << DESLOCAMENTO DE BITS À ESQUERDA

    EXEMPLO:
    considerando 0000 0010 =2

    *Not 0000 0010 = 1111 1101 (vale 253 )
    
    *numero=numero<<2;
      0000 1000 = 8(vale 8)

    *numero=numero >>1;
      0000 0001 =1 (equivale a 1 decimal)

*/

#include <stdio.h>

int main () {

  int valor =2;
  printf("Valor vale %d\n",valor);

  //deslocamento para esquerda
  valor=valor <<2;
  printf("Valor vale %d\n",valor);


  valor=2;
  //deslocamento para direira
  valor=valor >>1;
  printf("Valor vale %d\n",valor);


  valor=2;
  valor=~valor;
  printf("Valor vale %d\n",valor);
}
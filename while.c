#include <stdio.h>

//Estrutura de repetição -WHILE (enquanto)

/* 
Utilizado quando você precisa de um loop onde não se tenha
um número fixo de elementos mas que tenha um critério de parada 
e antes de iniciar a condição é checada


Problema: 
Faça um programa,no qual receba  esome números inteiros
até que o número de entrada seja 0 e apresente a soma no final
*/

int main () {
    
    //variáveis que vamos usar
    int numero,soma=0;

    //entrada
    printf("Informe um número:");
    scanf("%d",&numero);

    //enquanto o número for diferente de 0, faça
    while (numero !=0){
        soma=soma+numero;

        //entrada
        printf("Informe um número:");
        scanf("%d",&numero);

    }

    // saída
    printf("A soma é %d",soma);

    return 0;
}
#include <stdio.h>

// estruturas de repetição para,enquanto, faça enquanto

/* utilizando o for (para)

faça um programa,no qual receba e some 5 números inteiros e 
apresente a soma no final
*/


int main () {
     // variáveis
     // importante inicializar a variável soma com 0, caso contrário o resultado será lixo de memória
     int numero,soma =0; 

    // para o int i iniciando em 0,enquanto i for menor que 5,incrementando i em 1
    //(inicio;condição de parada;forma de incremento)
    for (int i=0;i<5;i++){
        //entrada
        printf("Informe um número:");
        scanf("%d",&numero);

        //processamento
        soma=soma+numero;
    }

    //saida
    printf("A soma é %d",soma);

    return 0;
}
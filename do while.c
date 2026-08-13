#include <stdio.h>
//Estrutura de repetição - DO WHILE (faça enquanto)

// a diferença do while para o while é que no do while a condição de parada é checada depois de executar o bloco de código, ou seja, o bloco de código será executado pelo menos uma vez.

int main() {

    //variávies
    int numero,soma=0;

    do{
        //entrada
        printf("Informe um número:");
        scanf("%d",&numero);

        //processamento
        soma=soma+numero;
    }
    //enquanto o número for diferente de 0, faça
    while (numero !=0);

    printf("A soma é %d",soma);

    return 0;

}

#include <stdio.h>
 // loop infinito
int main () {
    int valor = 1;

    while(1){ // o while 1 diz que é verdadeiro
        printf("Valor %d\n",valor);

        valor = valor + 1;

        // como não tem critério de parada ele continua infinitamente
    }

    return 0;
}
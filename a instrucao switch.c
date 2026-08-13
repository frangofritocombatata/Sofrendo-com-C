//Switch 

#include <stdio.h>

/* Usamos o Switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if

#na linguagem C

switch (variavel){
   case valor1:
        instruções;
        break;
    case valor2:
        instruções;
        break;
    default:  // o default serve para caso nenhum dos cases seja verdadeiro, ele é opcional
        instruções;
}

*/

int main (){
    int valor;

    printf("Digite um valor de 1 a 7:");
    scanf("%d", &valor);

    switch (valor){

        case 1:
           printf("Domingo\n");
           break;  //importante colocar o break para que o programa não continue executando os próximos cases
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Valor inválido \n");
    }

}


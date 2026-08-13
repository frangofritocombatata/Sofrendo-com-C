#include <stdio.h>

/*
TIPOS ALFANUMÉRICOS:
    -Characteres;
    -String

    * Na linguagem C,não existe o tipo de dado String.

    Ex: String
    "AAA eu to sempre cansada e com preguiça"; -->aspas duplas

    Ex:Caractere
    's'; -->aspas simples
*/

int main(){
    char opcao; // função char --> declarar um tipo de dado que armazena um único caractere
    printf("Informe uma opção:\n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limire da conta. \n");
    scanf ("%c",&opcao);

    if (opcao == 'a'){
        printf("Seu saudo é ... \n");
    }else if (opcao == 'b'){
        printf("Extrato de conta ... \n");
    }else if (opcao == 'c'){
        printf("Seu limite é ...\n");
    }else{
        printf("Opção inválida!\n");
    }

    return 0;
}
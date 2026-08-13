#include <stdio.h>

int main(){
    //declaração de uma string em C
    char nome [50]; //até 49 caracteres esse nome para finalizar a sting o C usa o \0

    printf("Qual o seu nome?");
    gets(nome); //receber uma string via teclado

    printf("Seu nome é %s",nome); //%s para entrar string
}
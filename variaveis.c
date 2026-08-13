//aula sobre variáveis
#include <stdio.h>

//int main () {
    //Função para escrever algo na sáida padrão (console)
   // printf("Hello World\n");
    //printf("Qual a sua idade?\n");
    //return 0; // o ; finaliza um comando
//}

//int main(){ // a chave delimita um bloco de código (início do bloco)
    //declarando variáveis
    //int idade; //inteiro
    
    //declarando e iniciando variáveis
    //int idade=0; //declarar com iniciação

//} //fim do bloco

int main(){
    int idade;
    printf("Qual a sua idade? "); //entre as aspas é uma string, ou seja, um conjunto de caracteres
    //receber dados
    scanf("%d", &idade); //&idade = endereço de memória da variável idade
    //%d = especificador de formato para inteiross
    //separar por vírgula os argumentos da função

    //saída
    printf("A sua idade é : %d",idade);
    return 0;
}
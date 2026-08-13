//estruturas de decisão if, else, else if
#include <stdio.h>

int main(){

    // declaração de variáveis
    int idade;

    //entradas
    printf("Qual a sua idade?");
    scanf("%d",&idade);

    //processamento,condições
    if (idade < 18){ //se a idade for menor que 18
        printf("Você é menor de idade\n");
    }else if (idade >= 18 && idade<60){  //&& significa "e" lógico     
        // se a idade for maior ou igual a 18 e menor que 60
        printf("Você é adulto\n");

        //se a idade for maior ou igual a 60
    }else{
        printf("Você é idoso\n ");
    }

    //saídas
    printf("Sua idade é %d",idade);
    return 0;
}
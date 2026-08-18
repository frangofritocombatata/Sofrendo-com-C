#include <stdio.h>

//Vetores 1

/*array uni-dimensional (vetores);

[0][1][2][3][4]
*/

int main() {
    //vetores e strings
    char nome[50]; 
    //"aaaaaksnoda956"

    printf("Qual o seu nome?");
    gets(nome);
    printf("Olá %s \n",nome);

    //vetores e carcateres
    char letras [26]; //0...25
    //'s','u'
    int contador=0;

    for(int i=97;i<=122;i++){
        letras[contador]=i;
        contador=contador+1;
    }
    //imprimindo as letras e seus valores em decimal
    for (int i=0;i<26;i++){
        printf("%d == %c \n",letras[i],letras[i]);
    }

    //char l='l'
    //char a=97;  outras opções para usar o CHAR

    //vetores de inteiros
    //int numero[10];

    //vetores e reais
    //float valor [5];

    return 0;

}

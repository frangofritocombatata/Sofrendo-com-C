#include <stdio.h>

// matrizes
/*array multidimensionais (matrizes) int numeros [5][5]; [linhas][colunas]

[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]
[0][1][2][3][4]

*/
int main(){
    //vetores e strings
    char nome [3][50];
    //"andlaçs"
    for (int i=0;i<3;i++){
    printf("Qual seu nome?");
    gets(nome[i]); //A função gets() na linguagem C serve para ler uma linha de texto digitada pelo usuário na entrada padrão (stdin) e armazená-la em um vetor de caracteres (string). Ela lê todos os caracteres até encontrar uma quebra de linha (\n)
    }
    for (int i =0;i<3;i++){ 
        printf("Olá %s\n",nome[i]);
    }
    return 0;
}

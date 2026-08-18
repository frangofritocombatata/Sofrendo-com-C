#include <stdio.h>

int main(){

    //vatores inteiros

    /* vetores de inteiros
    [00][01]
    [10][11] posição (i,j) [linha][coluna]
    */
    int numeros[2][2];
    numeros [0][0]=1;
    numeros[0][1]=2;
    numeros [1][0]=3;
    numeros [1][1]=4;

    for (int i=0;i<2;i++){ // esse irei trabalhar com as linhas
        for (int j=0;j<2;j++) //esse com coluna
            printf("numeros [%d][%d]vale %d\n",i,j,numeros[i][j]);
    }
 
    return 0;
}
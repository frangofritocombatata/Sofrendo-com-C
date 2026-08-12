#include <stdio.h>

int main() { 
    int n; //colocar as quantidades de frases
    char frase [50]; //colocar a frase e sua quantidade de caracteres
    scanf("%d", &n); // ler a quantidade de frases
    for (int i=0; i<n; i++){ // loop para fazer a quantidade de frases
        printf("Digite a sua frase:");
        scanf("%s", frase);
        printf("Frase %d: %s\n", i+1, frase);
    }
}

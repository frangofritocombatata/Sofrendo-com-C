#include <stdio.h>

/* Booleanos (verdadeiro/falso) true/false
 Na linguagem C,não existe um tipo booleano 
 Mas..
 A linguagem C reconhece o valor 0 como falso (false)
 e qualquer valor diferente de 0 como Verdadeiro (true)
*/

int main() {
    int booleano =1;
    
    if (booleano){
        printf("Verdadeiro...");
    }else{
        printf("Falso...");
    }
    return 0;
}
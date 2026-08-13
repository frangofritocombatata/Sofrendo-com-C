#include <stdio.h>

/*
Tipos numéricos:
 -Inteiros;
 -Reais;   
*/

int main() {
   //int  nota1,nota2;//7,890,455.... números inteiros
   
   //se eu declarar as notas como inteiros irá ter como saída o zero pois a média pode vir a ser um número real


   float  nota1,nota2;

   float media; // números reais; 25.4,3.14
                    // a diferença do float e do double é que o double suporta uma quantidade maior de dados
   //double outra_media; //23.4;1.23  também número reais


   printf("Qual a primeira nota?");
   scanf("%f",&nota1); //%f por ser float o tipo de entrada

   printf("Qual a segunda nota?");
   scanf("%f",&nota2);

   media=(nota1+nota2)/2;

   printf("A sua média é %.2f",media); // o 2 indica a quantidade de número de casa decimais

   return 0;
}

//quando a entrada for DOUBLE se deve fazer %lf
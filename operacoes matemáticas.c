#include <stdio.h>

//Operações matemáticas

/*
soma +
subtrair -
multiplicar *
dividir /
elevar ao quadrado x**2
módulo (resto da divisão de x por y) %
*/

int main(){
  int num1,num2,res;

  printf("Informe o num1:\n");
  scanf("%d",&num1);

  printf("Informe o num2:\n");
  scanf("%d",&num2);

  // soma+
  res=num1+num2;
  printf("A soma de %d \n",res);

  //subtrair
  res=num2-num1;
  printf("A subtração é %d \n",res);

  //multiplicar
  res=num1*num2;
  printf("A multiplicação é %d \n",(int)res);

  //dividir
  res=(float)num1/(float)num2; // cast --> converter o número para float para poder trabalhar
  printf("A divisão é %.2f \n",(float)res);
  
  //elevar ao quadrado
  res=(num1)*(num1);
    printf("O quadrado de num1 é %d \n",res);

  //módulo (verificando se o num1 é par ou ímpar)
  if (num1%2 ==0){
    printf("%d é par\n",num1);
  }else{
    printf("%d é ímpar\n",num1);
  }
  return 0;
}
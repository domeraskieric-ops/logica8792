#include<stdio.h>
#include<locale.h>


int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");


   int a = 5;
   int b = 4;

   printf("A soma dos números é: %d\n", (a + b));
   printf("A subtração dos números é: %d\n", (a - b));
   printf("A divisão é: %d\n", (a / b));
   printf("A multiplicção é: %d\n", (a * b));



   return 0;
}

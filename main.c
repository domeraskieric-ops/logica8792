#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int soma = 0;
   int i;

   for(i = 1; i <= 5; i++){
    //0+1
    //1+2
    //3+3
    //6+4
    //10+5
    soma = soma + i;
   }
   printf("Soma é %d", soma);

    return 0;
}
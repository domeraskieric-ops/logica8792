#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int a,b;

   printf("digite dois numeros:");
   scanf("%d %d", &a, &b);

   if(a == b){
    printf("os numeros sao iguais!\n");
   }else{
    printf("os numeros sao diferentes!\n");
   }

    return 0;
}

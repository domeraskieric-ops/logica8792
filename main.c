#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int n;

   printf("digite um numero:");
   scanf("%d", &n);

   //if(.....){
   // code....
   //}

   if(n > 0){
    printf("positivo\n");
   }else if(n < 0){
    printf("negativo\n");
   }else{
    printf("igual 0");
   }
   

   return 0;
}

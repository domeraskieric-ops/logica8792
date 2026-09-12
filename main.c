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
   }else{
    printf("negativo:\n");
   }
   

   return 0;
}

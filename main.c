#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int n;

   printf("digite um numero:");
   scanf("%d", &n);


   if (n % 2 == 0){
    printf("\nPar");
   }else{
    printf("\nImpar");
   }
     
   
   

   return 0;
}

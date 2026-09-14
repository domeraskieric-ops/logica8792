#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int n;

   printf("digite um numero:");
   scanf("%d", &n);


   printf("%s" , 2 == 0 ? "\npar":"\nimpar");
      
   
   

   return 0;
}

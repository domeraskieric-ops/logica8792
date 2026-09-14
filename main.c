#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int idade;

   printf("digite um numero:");
   scanf("%d", &idade);

    if (idade >= 18){
        printf("voce é maior de idade!");
    }else{
        printf("voce é maior de idade!");
    }


    
   
   

   return 0;
}

#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int a,b,c;

   printf("digite dois numeros:");
   scanf("%d %d %d", &a, &b, &c);

   if((a != b) && (b !=c)){
    printf("os tres numeros sao diferentes!\n");
   }else if(b != c){
    printf("os dois numeros sao diferentes!\n");
   }else{
    printf("todos os numeros sao iguais");
   }

    return 0;
}

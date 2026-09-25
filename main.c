#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int numero, contador = 0;

   printf("Digite números (0 para parar): \n");
   scanf("%d", &numero);

   while(numero != 0){
    contador++;
    scanf("%d", &numero);
   }
   
   printf("Quantidade de números digitados: %d\n", contador);

    return 0;
}









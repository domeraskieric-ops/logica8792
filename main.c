#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int numero, soma = 0;

   printf("Digite número para somar (0 encerra):");
   scanf("%d", &numero);

   while(numero != 0){
    soma += numero;
    scanf("%d", &numero);
   }
   printf("Soma total = %d\n", soma);
    return 0;
    }
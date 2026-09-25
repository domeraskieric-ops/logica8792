#include<stdio.h>
#include<locale.h>
#include<string.h>
    int ehPrimo(int n){
        if(n < 2)return 0;
        for(int i = 2; i < n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int numero;
   
   printf("Digite um número:");
   scanf("%d", &numero);

   if (ehPrimo(numero))
   printf("%d é primo\n", numero);
   else
   printf("%d não é primo\n", numero);
   
    return 0;
}









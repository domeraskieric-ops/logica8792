#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int n , primo =1;

   printf("Digite um número:");
   scanf("%d", &n);
   if(n < 2){
    primo = 0;
   }else{
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            primo = 0;
            break;
        } 
    }
   }
   if(primo){
    printf("%d é primo\n", n);
   }else{
    printf("%d não é primo\n", n);
   }

    return 0;
}









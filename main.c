#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int somaPares(int n){
    int soma = 0;
    for(int i = 2; i <= n; i += 2){
        soma += i;
    }
    return soma;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    printf("Soma dos Pares até 10: %d\n", somaPares(10));

   


    return 0;
}








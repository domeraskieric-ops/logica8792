#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int numero){
    return numero * numero;
}


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

 printf("Digite um número:");
 scanf("%d", &n);



 printf("O resultado é: %d", quadrado(n)); 

 

    return 0;
}








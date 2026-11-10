#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int quadrado(int n){
    return n * n;
}

int cubo(int n){
    return n * n * n;
}


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num;

    printf("Digite um número para a multiplicação: ");
    scanf("%d", &num);

    printf("O resultado é: %d %d ", quadrado(num), cubo(num));



    return 0;
}








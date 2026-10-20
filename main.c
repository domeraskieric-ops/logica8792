#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int n , pares = 0;

    printf("Digite numeros (0 para parar)\n");
    scanf("%d", &n);

    while(n != 0){ 
         if(n % 2 == 0){ 
        pares++;
    }
    printf("Digite um numero(0 para sair");
    scanf("%d", &n);
}
    printf("Quantidade de pares: %d\n", pares);

    return 0;
}








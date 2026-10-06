#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;

    do{
        printf("Digite um número maior que 0:");
        scanf("%d", &numero);
    }while(numero <= 0);

    printf("Você digitou %d, que é válido!\n", numero);

    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;
    int sucesso;

    do{
        printf("Digite um número maior que 0:");
        sucesso = scanf("%d", &numero);

        if(sucesso != 1){
            printf("Entrada inválida! Digite apenas numeros inteiros.\n");
            while (getchar() != '\n');
            numero = 0;
            
        }
    }while(numero <= 0);

    printf("Você digitou %d, que é válido!\n", numero);

    return 0;
}









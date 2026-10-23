#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#include<windows.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opçao;
    do(
        printf("\n---- MENU -----");
        printf("1 - Dizer olá\n");
        printf("2 - Dizer tchau\n");
        printf("0 - Sair\n");
        printf("Escolha:");
        scanf("%d", &opçao);
        if(opçao == 1){
            printf("Olá\n");
        }else if(opçao == 2){
            printf("Tchau!\n");
        }else if(opçao != 0){
            printf("Opção inválida");
        }
    )while(opçao != 0);
    printf("Até mais!\n");


    return 0;
}








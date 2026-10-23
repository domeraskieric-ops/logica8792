#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opçao;
    do{ 
        printf("\n---- MENU -----\n");
        printf("1 - Dizer olá\n");
        printf("2 - Dizer tchau\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opçao);

        if(opçao == 1){
            printf("Olá\n");
        }else if(opçao == 2){
            printf("Tchau!\n");
        }else if(opçao != 0){
            printf("Opção inválida\n");
        }

    }while(opçao != 0);
    printf("Até mais!\n");


    return 0;
}








#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opçao;

    printf("Digite um Número:");
    scanf("%d", &opçao);

    switch(opçao)
    { 
        case 1:
        printf("um");
        break;

        case 2:
        printf("Dois");
        break;

        case 3:
        printf("Três");
        break;

        case 4:
        printf("Quatro");
        break;

        default:
        printf("Opção inválida");
        break;
    }

    return 0;
}








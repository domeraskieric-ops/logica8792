#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int opcao = -1;

   while(opcao != 0){
    printf("\nMenu: \n");
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Consulatr\n");
    printf("0 - Sair\n");
    printf("Escolha:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: printf("Você escolheu Depositar\n"); break;
    case 2: printf("Você escolheu Sacar\n"); break;
    case 3: printf("Você escolheu Consultar\n"); break;
    case 0: printf("Saindo......."); break;

    default:printf("Opção inválida!\n");
    }
   }


    return 0;
    }
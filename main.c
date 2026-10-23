#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int Meses;

    printf("Digite o Número referente ao mes escolhido (1 a 12):\n");
    scanf("%d", &Meses);

    switch(Meses)
    { 
        case 4:
        case 6:
        case 9:
        case 11:
        printf("Seu mês tem 30 dias!");
        break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("Seu mês tem 31 dias!");
        break;

        case 2:
        printf("Seu mês tem 28 dias!");
        break;

        default:
        printf("Opção inválida");
        break;
    }

    return 0;
}








#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int diaDaSemana;

    printf("Digite um número de (1 a 7):");
    scanf("%d", &diaDaSemana);

   switch (diaDaSemana){
        case 1:
            printf("domingo!");
            break;
        case 2:
            printf("segunda-feira!");
            break;
        case 3:
            printf("terça-feira!");
            break;
        case 4:
            printf("quarta-feira!");
            break;
        case 5:
            printf("quinta-feira!");
            break;
        case 6:
            printf("sexta-feira!");
            break;
        case 7:
            printf("sábado!");
            break;    
        default:
            printf("Número inválido");
            break;
   }


    return 0;
}

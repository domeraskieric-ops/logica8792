#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int diaDaSemana;

    printf("Digite um número de (1 a 7):");
    scanf("%d", &diaDaSemana);

    if(diaDaSemana == 1){
        printf("domingo!");
    }else if(diaDaSemana == 2){
        printf("segunda-feira");
    }else if(diaDaSemana == 3){
        printf("terça-feira");
    }else if(diaDaSemana == 4){
        printf("quarta-feira");
    }else if(diaDaSemana == 5){
        printf("quinta-feira");
    }else if(diaDaSemana == 6){
        printf("sexta-feira");
    }else if(diaDaSemana == 7){
        printf("sabado");
    }else{
        printf("Valor invalido");
    }

    return 0;
}

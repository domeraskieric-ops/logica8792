#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float valor, cotação;

    printf("digite o valor em reais: ");
    scanf("%f" , &valor);

    printf("digite o valor em dolar:");
    scanf("%f", &cotação);

    printf("valor em dolares: %.2f\n", valor / cotação); 


   return 0;
}

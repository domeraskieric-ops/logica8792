#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   float peso, altura, imc;

   printf("Digite o peso (kg):");
   scanf("%f", &peso);

   printf("Digite a altura (m)");
   scanf("%f", &altura);

   imc = peso / (altura * altura);

   if(imc < 18.5){
    printf("Seu peso é: %f\n", peso);
    printf("Sua altura é: %f\n, altura");
    printf("Classificação: Abaixo do peso!\n"); 
   }else if(imc < 25){
    printf("Classificação: Peso normal!\n");
   }else if(imc < 30){
    printf("Classificação; Sobrepeso!\n");
   }else{
    printf("Clssificação: Obesidade!\n");
   }
    return 0;
}
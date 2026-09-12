#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int segundos, horas, minutos, resto;

   printf("digite a quantidade de segundos:");
   scanf("%d", &segundos);

   horas = segundos / 3600;
   minutos = (segundos % 3600) / 60;
   resto = segundos % 60;

   printf("%d horas, %d minutos e %d segundos\n", horas, minutos, resto);


   return 0;
}

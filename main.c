#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   float celsius, fahrenheit;

   printf("digite a temperatura em celsius:");
   scanf("%f", &celsius);

   fahrenheit = (celsius * 9.0 / 5.0) + 32;
   printf("fahrenheit: %.2f\n", fahrenheit);


   return 0;
}

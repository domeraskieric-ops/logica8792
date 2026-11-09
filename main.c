#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
   float celsiusParaFahrenheit(){
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    return celsius * 9 / 5 + 32;
   }
   

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    
    float fahrenheit;

    fahrenheit = celsiusParaFahrenheit();

    printf("Temperatura em fahreneit: %1.f F\n", fahrenheit);
    
    return 0;
}








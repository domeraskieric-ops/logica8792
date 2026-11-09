#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
   float celsiusParaFahrenheit(float c){
    return c * 9 / 5 + 32;
   }
   

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusParaFahrenheit(celsius);

    printf("%.1f C = %1.f F\n", celsius, fahrenheit);
    
    return 0;
}








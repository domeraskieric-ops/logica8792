#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float raio;
    const float PI = 3.14159;

    printf("digite o raio do circulo: ");
    scanf("%f" , &raio);
    printf("area: %.2f\n", PI * raio * raio);
    printf("perimetro: %.2f\n", 2 * PI * raio);


   return 0;
}

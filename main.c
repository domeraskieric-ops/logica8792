#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define PI 3.14159
float area_circulo(float raio){
    return PI * raio * raio;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float r;
    printf("Raio: ");
    scanf("%f", &r);
    printf("Área: %.2f/n", area_circulo(r));

    return 0;
}








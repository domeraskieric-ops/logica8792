#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[3];
    
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    printf("%d", numeros[2]);

  

    return 0;
}
#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[] = {10, 20, 30};
    int lenght = sizeof(numeros) / sizeof(numeros[0]);

    printf("%d", lenght);

  

    return 0;
}
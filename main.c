#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char frutas[3][20] = {"Maça", "Banana", "Laranja"};
    
    printf("%s\n", frutas[0]);
    printf("%s\n", frutas[1]);
    printf("%s\n", frutas[2]);



    return 0;
}
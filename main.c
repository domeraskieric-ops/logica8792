#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nomes[3][20] = {"Jubileu", "Jorge", "Otávio"};
    
    printf("%s\n", nomes[0]);
    printf("%s\n", nomes[1]);
    printf("%s\n", nomes[2]);



    return 0;
}
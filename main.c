#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[] = {10, 20, 30};

    printf("%zu", sizeof(numeros));

  

    return 0;
}
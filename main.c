#include<stdio.h>
#include<locale.h>

void dobrar(int *x){
    *x = *x *2;
}

int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero = 10; 
    dobrar(&numero);
    printf("Números depois na função %\n", numero);

    return 0;
}
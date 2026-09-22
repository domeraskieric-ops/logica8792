#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endreço de x: %p\n", &x);
    printf("Valor via pornteiro: %d\n", *p);

    return 0;
}
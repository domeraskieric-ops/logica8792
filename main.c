#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("digite um número: ");
    scanf("%d" , &n);

    printf("antecessor: %d\n", (n - 1));
    printf("sucessor: %d\n", (n + 1) );


   return 0;
}

#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

bool ehPar(int numero){
    return(numero % 2 == 0);
}

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    bool resultado1 = ehPar(4);
    bool resultado2 = ehPar(7);
    bool resultado3 = ehPar(9);
    bool resultado4 = ehPar(2);
    bool resultado5 = ehPar(6);


    printf("4 é par? %d\n", resultado1);
    printf("7 é par? %d\n", resultado2);
    printf("9 é par? %d\n", resultado3);
    printf("2 é par? %d\n", resultado4);
    printf("6 é par? %d\n", resultado5);






   return 0;
}

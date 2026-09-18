#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int m;

    printf("digite um numero de 1 a 12 referente ao mes");
    scanf("%d", &m );

    switch (m)
    {
    case 1:
    case 2:
    case 3:
        printf("verão");
        break;
    case 4:
    case 5:
    case 6:
        printf("inverno");
        break;
    case 7:
    case 8:
    case 9:
        printf("outono");
        break;
    case 10:    
    case 11:
    case 12:
        printf("primavera");
        break;

    default:
        printf("numero invalido");
        break;
    }

    return 0;
}
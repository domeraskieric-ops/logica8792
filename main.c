#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float a, b, c;

    printf("digite os tres lados do triangulo?");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("oa lados formam um triangulo!");
    }else{
        printf("os lados nao formam um triangulo!\n");
    }
    
    
    return 0;
}

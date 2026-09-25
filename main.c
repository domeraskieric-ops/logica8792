#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n, resto, invertido = 0;

    printf("Digite um número:");
    scanf("%d", &n);
    
    while(n != 0){
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n /= 10;
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}









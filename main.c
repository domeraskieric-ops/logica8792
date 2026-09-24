#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n, soma = 0;
    
    printf("Digite um número:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
    }
    printf("o resultado da soma é: %d\n", soma);


    return 0;
}









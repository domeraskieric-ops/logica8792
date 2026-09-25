#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n, soma = 0;
    printf("Digite um número:");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    if(soma == n){
        printf("%d é um número perfeito\n", n);
    }else{
        printf("%d Não é um número perfeito\n", n);
    }

    
    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int limite;

    printf("Digite o limite:");
    scanf("%d", &limite);

    for(int n = 1; n <= limite; n++){
        int soma = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                soma += i;
            }
        }
        if(soma == n & n != 0){
            printf("%d é um número perfeito\n", n);
        }
    }
    return 0;
}









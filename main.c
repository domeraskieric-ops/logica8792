#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int senha = 1234;
    int tentativa;

    printf("Digite a senha:");
    scanf("%d", &tentativa);

    while(tentativa != senha){
        printf("Senha incorreta! Tente Novamente!\n");
        scanf("%d", &tentativa);
    }
    printf("Acesso liberado!\n");



    return 0;
}








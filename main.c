#include<stdio.h>
#include<locale.h>
#include<string.h>

    struct pessoal
    {
        char nome[50];
        int idade;
        float altura;
        float peso;
    };
    

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct pessoal p1;

    printf("Digite o nome completo:");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    
    return 0;
  
} 









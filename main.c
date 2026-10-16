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

    printf("---- Bem-vindo a academia GYMtech ----");
    printf("\n");
    printf("Qual seu nome:");
    scanf("%s", p1.nome);
    
    printf("Qual sua idade:");
    scanf("%d", &p1.idade);
    
    printf("Qual sua altura:");
    scanf("%f", &p1.altura);
    
    printf("Qual seu peso:");
    scanf("%f", &p1.peso);


    printf("\n------------- Dados da Pessoa --------------\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);
    printf("Peso: %.2f\n", p1.peso);
    
    return 0;
  
} 









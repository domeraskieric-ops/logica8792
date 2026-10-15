#include<stdio.h>
#include<locale.h>
#include<string.h>

    struct pessoal
    {
        char nome[50];
        int idade;
        float altura;
    };
    

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct pessoal p1 = {"Eric", 24, 1.77};
    struct pessoal p2 = {"Otavio", 4, 1.10};
    struct pessoal p3 = {"João", 93, 1.66};

    printf("Nome: %s | Idade: %d | Altura: %.2F\n", p1.nome, p1.idade, p1.altura);
    
    printf("Nome: %s | Idade: %d | Altura: %.2F\n", p2.nome, p2.idade, p2.altura);
    
    printf("Nome: %s | Idade: %d | Altura: %.2F\n", p3.nome, p3.idade, p3.altura);
    
    
    
    
    
    
    return 0;
  
} 









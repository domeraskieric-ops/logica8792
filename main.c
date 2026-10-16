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

    int n;

    printf("Quantas pessoas deseja cadastrar:");
    scanf("%d", &n);
    
    getchar(); //consome o '\n' deixado pelo scanf
    
    struct pessoal p1[n];
    for(int i = 0; i < n; i++){
        printf("\nPessoa %d\n",i + 1);
        printf("Nome completo:");
        fgets(p1[i].nome, sizeof(p1[1].nome), stdin);

        printf("Idade:");
        scanf("%d", &p1[i].idade);
        
        printf("Altura:");
        scanf("%f", &p1[i].altura);
        
        printf("Peso:");
        scanf("%f", &p1[i].peso);

        getchar();

    }
    printf("\n---- Lista de Pessoas ----\n");
    for(int i = 0; i < n; i++){
        printf("Nome: %s | Idade: %d | Altura: %.2f | Peso: %.2f\n", p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
    }


    
    return 0;
  
} 









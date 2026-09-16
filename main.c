#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1, n2, n3;
    float freq;
    float media;

    printf("Digite a nota 1:");
    scanf("%d", &n1);

    printf("\nDigite a nota 2: ");
    scanf("%d", &n2);

    printf("\nDigite a nota 3: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3;
    
    printf("Digite a frequencia (em numeros apenas): ");
    scanf("%f", &freq);

    if( media >= 7 && freq >= 75){
        printf("\nAprovado com sucesso!");
    }else{
        printf("\nReprovado!");
    }



    return 0;
}

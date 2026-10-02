#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor %d:", i + 1);
        scanf("%d", &v[i]);
    }
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma =+ v[i];
    }
    float media = (float)soma/n;
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}









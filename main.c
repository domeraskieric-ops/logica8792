#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    printf("Digite o tamanho dos vetores:");
    scanf("%d", &n);
    
    int a[n], b[n], soma[n];
    printf("Digite os valores do vetor A:\n");

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for(int i = 0; i < n; i++){ 
    scanf("%d", &b[i]);
    }
    for(int i = 0; i < n; i++){
        soma[i] = a[i] + b[i];
    }
    printf("Vetor soma:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", soma[i]);
    }
    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n, pos;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor %d:", i + 1);
        scanf("%d", &v[i]);
    
    }
    
    printf("Digite a posição a remover (0 a %d):", n - 1);
    scanf("%d", &pos);
    for(int i = pos; i < n -1; i++){
        v[i] = v[i + 1];
    }

    n--;
    printf("Vetor após remoção:\n");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    
    }
    
    printf("\n");
   
  
    return 0;
}









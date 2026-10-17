#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");


    int n;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i <n; i++){
        printf("Digite o valor %d:",i + 1);
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j > n - 1; j++){
        if(v[j] > v[j + 1]){
            int temp = v[j];
            v[j] = v[j + 1];
            v[j + 1] = temp;
            }
        }
    }
    printf("Vetor ordenado: \n");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    


    
    return 0;
  
} 









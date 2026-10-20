#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int n , soma = 0;

    printf("Digite numeros (0 para parar)\n");
    scanf("%d", &n);

    while(n != 0){ 
       soma += n;
       scanf("%d", &n);
    }
    printf("Soma dos Numeos digitados: %d",soma);
    return 0;
}








#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("De que tamanho será o triangulo:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){ 
        printf("");
        
    }
    for(int k = 1; k <=(2 * i -1); k++){ 
    printf("*");
    }
    printf("\n");
}

    
    return 0;
}









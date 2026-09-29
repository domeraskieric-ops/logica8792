#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("De que tamanho será o quadrado:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("\n");
        for(int j = 1; j <= n; j++){ 
        printf("*");
        // \t  horizontal \n vertical
    }
    
}

    
    return 0;
}









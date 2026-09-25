#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n,s;
    int resultado;

    printf("digite um número:\n");
    resultado = scanf("%d",&n);

    if(resultado != 1){
        printf("entrada inválida! apenas numeros");
        return 1;
    }

    for(int i = 1; i <= 10; i++){
        s = i * n;
        printf("\n%d x %d = %d", i,n,s);
    }
    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    long long fatorial = 1;

    printf("Digite um número:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
    }
    printf("fatorial: %lld\n", fatorial);
    return 0;
}









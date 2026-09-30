#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n,contador = 0;

    printf("Digite o limite N:");
    scanf("%d", &n);

    for(int num = 2; num <= n; num++){
        int primo = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
        if(primo){
            contador++;
        }
    }
    printf("Quantidade de primos entre 1 e %d: %d\n", n, contador);
    return 0;
}









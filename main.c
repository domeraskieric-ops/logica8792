#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void saudacao(char nome[]){
    printf("Olá, %s\n", nome);
        }
int soma(int a, int b){
    return a + b;
} 

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    saudacao("Eric");
    int resultado = soma(5, 5);
    printf("%d", resultado);

    return 0;
}








#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int soma(int a, int b){
    return a + b;
}

void soma1(){
    int x, y, resultado;
    printf("Digite um valor para x:");
    scanf("%d", &x);
    
    printf("Digite um valor para y:");
    scanf("%d", &y);

    resultado = x + y;
    printf("\nA soma de %d + %d = %d", x, y, resultado);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    
    

    soma1();

    return 0;
}








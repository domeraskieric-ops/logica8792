#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

// void somar(int a, int b){
//     printf("Soma = %d\n", a + b);
// }

// int soma(int x, int y){
//     return x + y;
// }
    void calcularNum(int num1, int num2){
        printf("Digite o valor de num1");
        scanf("%d", num1);
        printf("Digite o valor de num 2");
        scanf("%d", num2);
        int soma = num1 + num2;
        printf("O valor da soma é: %d", soma);

    }

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // somar(5, 2);
    // int resultado = soma(8, 2);
    // printf("O resultado é: %d", resultado);
    int b, c;

    calcularNum(b, c);

    return 0;
}








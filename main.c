#include<stdio.h>
#include<locale.h>

    int somar(int a, int b){
        return a + b;
    }

    int subtrair(int a, int b){
        return a - b;
    }

    int multiplicador(int a, int b){
        return a * b;
    }

    int dividir(int a, int b){
        if(b <= 0){
            printf("Ele precisa ser maior que 0!");
        }else{
            return a / b;
        }
    }

    // void soma(){
    //     int num1, num2;
    //     printf("Digite um valor para num1:");
    //     scanf("%d", &num1);
    //     printf("Digite um valor para num2:");
    //     scanf("%d", &num2);
    //     int resultado = num1 + num2;
    //     printf("O resultado da soma é %d\n", resultado1 );
    //}
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resultado = somar(5, 3);

    printf("A soma é: %d", resultado);
    
    return 0;
}
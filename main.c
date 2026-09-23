#include<stdio.h>
#include<locale.h>
#include<math.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;
    printf("Digite um número:");
    scanf("%d", &numero);

    int quadrado = (int)pow(numero, 2);
    int cubo = (int)pow(numero, 3);
    printf("Quadrado de %d = %d\n", numero, quadrado);
    printf("Cubo de %d = %d", numero, cubo);

    return 0;
}
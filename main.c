#include<stdio.h>
#include<locale.h>
#include<math.h>

        int tabuada(int n){    
         printf("Tabuada do %d:\n", n);
            for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", n, i, n * i);
            }
            return 0;
        }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero;
    printf("Digite um número para ver a tabuada:");
    scanf("%d", &numero);
    tabuada(numero);

    return 0;
}
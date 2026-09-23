#include<stdio.h>
#include<locale.h>
#include<math.h>

        int tabuada(int n){
            int resultado;
            printf("Tabuada do %d:\n", n);
            for(int i = 1; i <= 10; i++){
                resultado = n * i;
                printf("%d x %d = %d\n", n, i, resultado);
            }
            return resultado;
        }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int ultimo = tabuada(7);
    printf("último valor da tabuada: %d\n", ultimo);

    return 0;
}
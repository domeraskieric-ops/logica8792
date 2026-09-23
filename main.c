#include<stdio.h>
#include<locale.h>
#include<math.h>

        int fatorial(int n){
            int resultado = 1;
            for(int i = 1; i <= n; i++){
                resultado *= i;//resultado = resultado *i ;
            }
            return resultado;
        }
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero = 5;
    printf("Fatorial do %d = %d\n", numero, fatorial(numero));
    

    

    return 0;
}
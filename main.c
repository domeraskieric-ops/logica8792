#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int fatorial(int numero){
    if(numero == 0 || numero == 1){
        return 1;
    }
    return numero * fatorial(numero - 1);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
   
    int resultado = fatorial(5);
    printf("Fatorial: %d\n", resultado);
    

    return 0;
}








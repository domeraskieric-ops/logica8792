#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int inverter(int numero, int resultado){
    if(numero == 0){
        return resultado;
    }
    return inverter(numero / 10, resultado * 10 + numero % 10);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Invertido: %d\n", inverter(1234,0));

    return 0;
}








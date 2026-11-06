#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int somarDigitos(int numero){
    if(numero == 0){
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Soma: %d\n", somarDigitos(1234));

    return 0;
}








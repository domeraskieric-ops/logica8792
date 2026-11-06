#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int  contarDigitos(int numero){
    if(numero < 10){
        return 1;
    }
    return 1 + contarDigitos(numero / 10);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Quantidade: %d\n", contarDigitos(45872));

    return 0;
}








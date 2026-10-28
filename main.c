#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void mostrarNumero(int numero){
    printf("Número: %d\n", numero);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    mostrarNumero(40);

    return 0;
}








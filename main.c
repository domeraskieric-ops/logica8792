#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int dobro(int numero){
    return numero * 2;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int valor = 8;
    printf("Dobro = %d\n", dobro(valor));

    return 0;
}








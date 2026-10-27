#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main(){    

    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
     const int QTD = 5;
    int numeros[QTD];
    srand(time(NULL));

    for(int i = 0; i < QTD; i++){
        numeros[i] = rand() % 10 + 1;
    }
    printf("Números sorteados:\n");

    for(int i = 0; i < QTD; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}








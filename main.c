#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void linha(int n){
    for(int i = 0; i < n; i++){
        printf("-");
        printf("\n");
    }
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    linha("30");
    printf("BEM-VINDO AO SISTEMA\n");
    linha("30");


    return 0;
}








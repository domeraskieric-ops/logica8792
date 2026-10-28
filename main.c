#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void somar(int a, int b){
    printf("Soma = %d\n", a + b);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    somar(5, 2);

    return 0;
}








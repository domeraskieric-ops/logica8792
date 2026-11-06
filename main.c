#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int potencial(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    return base * potencial(base, expoente - 1);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Resultado: %d\n", potencial(2, 4));

    return 0;
}








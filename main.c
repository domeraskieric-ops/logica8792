#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int somar(int n){
    if(n == 0){
        return 0;
    }
    return n + somar(n - 1);
    // return 5 + somar(4);
    // return 4 + soamr(3);
    // sucessivamente
}


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
 
    int resultado = somar(5);
    printf("Resultado: %d\n", resultado);
   
    

    return 0;
}








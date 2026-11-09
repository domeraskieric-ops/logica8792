#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
long long fatorial(int n){
    long long resultado = 1;
    for(int i = 1; i <= n; i++ ){
     resultado *= i;  
    }
    return resultado;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    printf("S!=%11d\n", fatorial(5));

    return 0;
}








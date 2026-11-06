#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void tabuada(int numero, int contador){
    if(contador > 10){
        return;
    }
    printf("%d x %d = %d\n", numero, contador, numero * contador);

    tabuada(numero, contador + 1);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    tabuada(7 , 1);

    return 0;
}








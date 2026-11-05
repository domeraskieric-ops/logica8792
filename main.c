#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void contagem(int n){
    if(n == 0){
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
   
    contagem(10);

    return 0;
}








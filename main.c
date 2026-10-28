#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void linha(){
    printf("-----------------------\n");
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    linha();
    printf("Meu nome é Eric!\n");
    linha();

    return 0;
}








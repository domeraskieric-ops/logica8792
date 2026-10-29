#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void monstrarNome(char nome[]){
    printf("Nome: %s\n", nome);
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    monstrarNome("Eric");

    return 0;
}








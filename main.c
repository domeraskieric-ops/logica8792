#include<stdio.h>
#include<locale.h>
#include<string.h>
 
char* retornarNome(char nome[]){
    return nome;
}

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("O nome é: %s\n", retornarNome("Eric"));

    return 0;
}









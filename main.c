#include<stdio.h>
#include<locale.h>
#include<string.h>
 
char* saudacao(){
    return "Óla, seja bem-vindo(a)!";
}

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("%s\n", saudacao());

    return 0;
}









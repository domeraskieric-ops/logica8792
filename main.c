#include<stdio.h>
#include<locale.h>
#include<string.h>
 
void num(){ 
    printf("Este é o número 5"); 
}    
int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    num();    
    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i = 10;

    
    while(i <= 5){
        printf("%d\n", i);
        i++;
    }
    return 0;
    }
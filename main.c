#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i = 1;

    do{
        printf("%d\n", i);
        i++;
    }while(i <= 5);

    return 0;
}









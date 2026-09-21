#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    for(int i = 0; i < 10000; i++){
        printf("%d\n", i);
    }
    printf("\nMeu for funcionou!!");
    return 0;
}
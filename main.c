#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    for(int i = 0; i < 1000; i++){
        printf("%s\n %d", "\nOs números estão aumentando: ---->>" ,i);
    }
    printf("\nMeu for funcionou!!");
    return 0;
}
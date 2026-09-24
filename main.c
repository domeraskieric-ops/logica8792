#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int EhparImpar;

    printf("numero");
    scanf("%d", &EhparImpar);

    if (EhparImpar % 2 == 0){
        printf("numero par!\n");
    }else{
        printf("numero impar");
    }

    return 0;
}
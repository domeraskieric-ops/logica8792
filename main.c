#include<stdio.h>
#include<locale.h>

    void saudar(const char *nome){
        printf("Olá %s!\n", nome);
    }

    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    saudar("Eic");
    saudar("domeraski");
    saudar("Das Almas");
    
    return 0;
}
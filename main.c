#include<stdio.h>
#include<locale.h>
#include<math.h>

    void linha (int tamanho){
        for(int i = 0; i < tamanho; i++){
            printf("*");
        }
        printf("\n");
    }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    linha(10000);

    return 0;
}
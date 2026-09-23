#include<stdio.h>
#include<locale.h>
#include<math.h>

    void verificarEhParImpar(int n){
        if(n % 2 ==0){
            printf("%d é par!\n", n);
        }else{
            printf("%d é impar!\n", n);
        }
    }

int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    verificarEhParImpar(10);
    verificarEhParImpar(7);
    

    return 0;
}
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>  

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total = 0;
    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;
        if(unidade == dezena * 2){
            total++;
        }
    }
    printf("Número com unidade igual ao dobro dezena: %d\n", total);
    
   


    return 0;
}








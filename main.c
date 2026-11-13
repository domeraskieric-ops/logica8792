#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>  

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total = 0;

    for (int i = 100; i <= 999; i++){
        int centena = i / 100;
        int unidade = i % 10;
         if(centena == unidade){
             printf("%d\n", i);
             total++;
         }
    }
     printf("Palindromo de 3 digitos: %d\n", total);

    return 0;
}








#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

    int palindromo(char palavra[], int inicio, int fim){
        if(inicio >= fim){
            return 1;
        }
        if(palavra[inicio] != palavra[fim]){
            return 0;
        }
        return palindromo(palavra, inicio + 1, fim - 1);
    }

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavra[50] = "radar";

    if(palindromo(palavra, 0, strlen(palavra) - 1)){
        printf("É palindromo!\n");
    }else{
        printf("Não é palindromo!\n");
    }
    
   

    return 0;
}








#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>  

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavra[50];
    int tamanho;
    int palindromo;
    printf("Digite uma palavra:");
    scanf("%49s", palavra);
    tamanho = strlen(palavra);
    for(int i = 0; i < tamanho / 2; i++){
        if(palavra[i] != palavra[tamanho - 1 - i]){
            palindromo = 0;
        }
    }
    if(palindromo == 1){
        printf("A palavra é um palindromo!\n");
    }else{
        printf("A palavra não é um palindromo!\n");
    }

    return 0;
}








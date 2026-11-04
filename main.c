#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char texto[100];

    int tamanho = 0;

    printf("Digite uma frase: ");

    fgets(texto, 100, stdin);

    texto[strcspn(texto, "\n")] = '\0';

    while(texto[tamanho] != '\0'){ 
        tamanho++;
    }
    printf("Quantidade de caracteres: %d\n", tamanho);
    
    return 0;
}








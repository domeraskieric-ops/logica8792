#include<stdio.h>
#include<locale.h>
#include<string.h>

    void contarVogais(char palavras[]){
        int contador = 0;
        for(int i = 0; i <strlen(palavras); i++){
            char c = palavras[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                contador++;
            }//strlen calcula os caracteres de uma palavra.
        }
        printf("A palavra '%s' tem %d vogais.\n", palavras, contador);
    }
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char p[50];

    printf("Digite uma palavra:\n");
    scanf("%s", p);

    contarVogais(p);


    return 0;
}
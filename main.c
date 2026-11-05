#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int buscar(float vetor[], int tamanho, float chave){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float numeros[] = {10.5, 20.5, 30.5, 40.5, 50.5};

    int tamanho = 5;

    float procurado;

    printf("Digite o número que deseja procurar: ");
    scanf("%f", &procurado);

    int resultado = buscar(numeros, tamanho, procurado);
    if(resultado != -1){
        printf("Número encontrado!\n");
        printf("Valor: %.2f\n", numeros[resultado]);
        printf("Posição no Vetor: %d\n", resultado);
    }else{
        printf("Número não encontrado!\n");
    }
   
    
    return 0;
}








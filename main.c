#include<stdio.h>
#include<locale.h>
#include<string.h>

    void maxMin(int v[], int tamanho){
        int max = v[0], min = v[0];
        for(int i = 1; i < tamanho; i++){
            if(v[i] > max) max = v[i];
            if(v[i] < min) min = v[1];
        }
        printf("Máximo: %d, Mínimo: %d\n", max,min);
    }
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[] = {4, 8, 2, 15, 6};
    maxMin(numeros, 5);



    return 0;
}
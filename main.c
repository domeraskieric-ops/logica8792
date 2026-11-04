#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void mostraVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    printf("\n");
}
void inverterVetor(int v[],int n){
    for(int i = 0; i < n / 2; i++){
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[5] = {1, 2, 3, 4, 5};
    
    printf("Antes: ");
    
    mostraVetor(numeros, 5);
    inverterVetor(numeros, 5);

    printf("Depois: ");

    mostraVetor(numeros, 5);

    
    
    return 0;
}








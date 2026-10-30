#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int vet[10];

    for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor: ");
    for(int i = 0; i < 10; i++){
        printf("%d", vet[i]);
        printf("\n");
    }

    return 0;
}








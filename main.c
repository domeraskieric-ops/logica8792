#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

  int numeros [5];
    for(int i = 0; i < 5; i++){
        printf("Digite o %d número:", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nNúmeros digitados: \n");
    for(int i = 0; i < 5; i++){
        printf("%d", numeros[i]);
    }


    return 0;
}








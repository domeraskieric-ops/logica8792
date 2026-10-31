#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int m[3][3];
    int maior, linhaMaior = 0, colunaMaior = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ",i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; i < 3; j++){
        if(m[i][j] > maior){
            maior = m[i][j];
            linhaMaior = i;
            colunaMaior = j;
        }
        }
    }
    printf("Maior elemento: %d\n", maior);
    printf("Posição: linha %d, coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}








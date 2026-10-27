#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void exibirMatriz(int m[][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int main(){    

    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
     int m[2][2] = {
        {1, 2},
        {3, 4},
     };
     exibirMatriz(m);

    return 0;
}








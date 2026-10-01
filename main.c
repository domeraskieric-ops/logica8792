#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6,},
        {7, 8, 9}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){ 
    printf("Elementos da matriz: %d\n", matriz[i][j]);
        }
    }
    return 0;
}









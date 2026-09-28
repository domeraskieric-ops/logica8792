#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

//     for(int i = 1; i <= 10; i++){ 
   
//         for(int j = 1; j <= 10; j++){



//     printf("\n%d x %d = %d", i,j,i * j);

//    }
//    printf("\n");
// }

    for(int i = 1; i < 7; i++){
        for(int j = i; j < 7; j++){
            printf("For externo e for interno: %d %d\n", i, j);
        }
    }

    return 0;
}









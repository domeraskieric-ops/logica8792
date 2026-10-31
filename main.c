#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int t[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\n", a[i][j]);
        }
    }
    
    return 0;
}








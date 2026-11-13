#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>  

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total = 0;

    for (int i = 1; i <= 100; i++){
    if( i % 4 == 0){
        printf("%d\n",i);
        i++;
    }
    }

    return 0;
}








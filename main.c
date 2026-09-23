#include<stdio.h>
#include<locale.h>

   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }

    


    return 0;
}
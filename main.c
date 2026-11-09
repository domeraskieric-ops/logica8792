#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

   void contagem(int n){
    for (int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("fogo!\n");
   }

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    contagem(5);
    
    
   

    return 0;
}








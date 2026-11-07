#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

   void contar(int n){
    for (int i = 0; i < n; i++){
        printf("%d\n", i + 1);
    }
   }

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    contar(5);
    
    
   

    return 0;
}








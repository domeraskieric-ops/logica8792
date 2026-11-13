#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>  

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

   int total = 0;
   for( int i = 0;i <= 500; i++){
    if(i % 10 == 7 && i % 3 == 0){
        printf("%d\n",i);
        total++;
    }
   }
   printf("\nTotal: %d\n", total);

    return 0;
}








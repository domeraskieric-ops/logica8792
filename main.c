#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n = 1, s;

    for(int i = 0; i <= 10; i++){ 
   
        for(int i = 1; i <= 10; i++){

    s = n * i;

    printf("\n%d x %d = %d", n,i,s);

   }
   printf("\n");

   n = n + 1;
   
}

    return 0;
}









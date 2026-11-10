#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int absoluto(int n){
    if(n < 0){
        return -n;
    }
    return n;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("%d\n",absoluto(-8));
    printf("%d\n",absoluto(4));
    printf("%d\n",absoluto(0));
    

   


    return 0;
}








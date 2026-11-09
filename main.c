#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int soma(int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
}
    return total;
}


int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;
    printf("Numero para soma:");
    scanf("%d", &num);

    printf("soma de 1 ate: %d\n", soma(num));

    return 0;
}








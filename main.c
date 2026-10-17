#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");


    int n;

    printf("Digite N:");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        int resultado = i * n;
        printf("%d x %d = %d\n",i, n , resultado); 
    }

    


    
    return 0;
  
} 









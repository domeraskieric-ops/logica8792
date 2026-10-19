#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int n;

    printf("Digite um valor para n:");
    scanf("%d", &n);

    while(n >= 0){
        printf("%d\n",n);
        n--;
    }
    
    return 0;
  
} 









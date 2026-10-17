#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");


    int n;
    int soma = 0;

    printf("Digite N:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        soma -= 1;
        printf("%d + %d = %d\n",soma, i , soma + i);
    }
    


    
    return 0;
  
} 









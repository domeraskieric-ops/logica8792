#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int somaDigitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n % 10;
         n /= 10;
    }
    return soma;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;
    printf("Digito um numero:");
    scanf("%d", &num);

    printf("Soma dos digitos é: %d\n", somaDigitos(num));
    

    return 0;
}








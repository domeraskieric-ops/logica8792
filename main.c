#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
  
int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    return maior;
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num1, num2, num3;

    printf("digite tres numeros:");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Maior: %d\n",maiorDeTres(num1,num2,num3));
    

   


    return 0;
}








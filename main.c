#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int a,b,c, maior;

   printf("digite tres números:");
   scanf("%d,%d,%d", &a, &b, &c);

   maior = a;

   if(b > maior) maior = b;
   if(c > maior) maior = c;

   printf("maior: %d", maior);

    return 0;
}

#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int a,b,c,d,e,menor,maior;

    printf("digite um numero para a:");
    scanf("%d", &a);

    printf("digite um numero para b:");
    scanf("%d", &b);

    printf("digite um numero para c:");
    scanf("%d", &c);

    printf("digite um numero para d:");
    scanf("%d", &d);

    printf("digite um numero para e:");
    scanf("%d", &e);

   menor = a;

   if(b < menor) menor = b;
   if(c < menor) menor = c;
   if(d < menor) menor = d;
   if(e < menor) menor = e;

   maior = a;

   if(b > maior) maior = b;
   if(c > maior) maior = c;
   if(d > maior) maior = d;
    if(e > maior) maior = e;


   printf("menor: %d", menor);
   
   printf("maior: %d", maior);

    return 0;
}

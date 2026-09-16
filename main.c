#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int  idade;
   int ehEstudante;

   printf("Qual sua idade");
   scanf("%d", &idade);
   printf("\nVoce é estudante (0 - Não | 1 - sim):");
   scanf("%d", ehEstudante);

   if((idade >= 60) && (ehEstudante == 1)){
    printf("parabens voce tera desconto");
   }else{
    printf("Infelismente voce nao tera desconto");
   }

    return 0;
}

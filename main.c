#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int opcao;

   printf("---- sistema de pedagio -----\n");
   printf("1 - moto\n");
   printf("2 - carro passeio\n");
   scanf("%d", &opcao);

   switch (opcao){
    case 1 :
        printf("moto | tarifa: R$ 5,00\n");
        break;
    case 2 :
        printf("carro paseio R$ 10,00\n");  
        break;
    default:
        printf("ERRO\n");
        break;      
   }
    
    
    return 0;
}
